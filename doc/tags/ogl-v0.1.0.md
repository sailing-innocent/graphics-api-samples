# ogl-v0.1.0: The OpenGL Branch Init 

在这一次更新中，我们首先会给我们的项目添加glfw依赖，并且添加一个基本的测试用例ogl::window来打开一个空白的glfw窗口。在那之后，我们会封装一个自己的app，从而打开一个有背景色的窗口，测试用例为ogl::plain_app。

- add dependencies: xmake.lua, src/xmake.lua
- basic glfw testcase: test/gas_test/ogl/hello.cpp

- add deps: xmake.lua
- OGLPlainApp class in gas.lib: src/ogl/plain_app.h & src/ogl/plain_app.cpp
- OGLPlainApp test suite: test/gas_test/ogl/test_plain_app.cpp