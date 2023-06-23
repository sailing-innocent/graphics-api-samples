/**
 * @file ogl/plain_app.cpp
 * @author sailing-innocent
 * @date 2023-06-23
 * @brief the implementation for gl plain window
 */

#include "glad/gl.h"
#include <GLFW/glfw3.h>

#include "plain_app.h"
#include "utils.h"

#include <iostream>

namespace gas{

void OGLPlainApp::init(){
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);

    init_window(m_resw, m_resh);
    init_buffers();
}

void OGLPlainApp::init_window(unsigned int resw, unsigned int resh){
    m_window = glfwCreateWindow(resw, resh, m_title.c_str(), NULL, NULL);
    if (m_window == nullptr)
    {
        glfwTerminate();
    }
    glfwMakeContextCurrent(m_window);
    if (!gladLoadGL(glfwGetProcAddress))
    {
        std::cerr << "Failed to Load GLAD" << std::endl;
    }
}

bool OGLPlainApp::tick(){
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(m_window);
    glfwPollEvents();

    return !glfwWindowShouldClose(m_window);
}

void OGLPlainApp::terminate(){
    destroy_buffers();
    destroy_window();
    glfwTerminate();
}

void OGLPlainApp::destroy_window(){
    if(m_window){
        glfwDestroyWindow(m_window);
        m_window = nullptr;
    }
}



} // namespace gas