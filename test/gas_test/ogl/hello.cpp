/**
 * @file test/gas_test/ogl/hello.cpp
 * @author sailing-innocent
 * @date 2023-06-23
 * @brief the hello environment for opengl dependencies
 */

#include <catch2/catch.hpp>

#define GLAD_GL_IMPLEMENTATION
#include "glad/gl.h"
#include <GLFW/glfw3.h>

#include <iostream>

int ogl_window() {
    glfwInit(); // init glfw context
    // set glfw context version
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    // for Mac OS, you have to set your gl mode to core
    // glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    
    GLFWwindow* window = glfwCreateWindow(800, 600, "GLFWBlankWindow", NULL, NULL);
    if (window == NULL) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    if (!gladLoadGL(glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
    glViewport(0, 0, 800, 600);

    while(!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();    
    } 
    glfwTerminate();
    return 0;
}


TEST_CASE("ogl::window", "[ogl]"){
    REQUIRE(ogl_window() == 0);
}