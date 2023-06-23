#pragma once
/**
 * @file ogl/plain_app
 * @author sailing-innocent
 * @date 2023-06-23
 * @brief OpenGL plain app that output colored window
 */

#include <GLFW/glfw3.h>
#include <gas.h>
#include <string>

namespace gas{

class OGLPlainApp : public GASApp {
public:
    OGLPlainApp() = default; // create the app
    virtual ~OGLPlainApp() {}; // destroy the app

public:
    virtual void init() override; // init the app
    virtual bool tick() override; // run the logic tick and render tick, return if the app is running or not
    virtual void terminate() override; // terminate the app

protected:
    virtual void init_window(unsigned int resw, unsigned int resh);
    virtual void init_buffers(){}; // nothing to do here
    virtual void destroy_buffers(){}; // nothing to do here
    virtual void destroy_window();

protected:
    std::string m_title = "GAS_OGL_Plain";
    unsigned int m_resw = 800;
    unsigned int m_resh = 600;
    GLFWwindow *m_window = nullptr;
};

} // namespace gas
