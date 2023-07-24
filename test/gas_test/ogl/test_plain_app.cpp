/**
 * @file test_plain_app.cpp
 * @author sailing-innocent
 * @date 2023-06-23
 * @brief The test suite for GAS opengl plain app
 */

#include "common/gas_app_util.h"

#include <ogl/plain_app.h>

int ogl_plain_app() {
    gas::OGLPlainApp app;
    app.init();
    while(app.tick());
    app.terminate();
    return 0;
}

TEST_SUITE("ogl_basic") {

TEST_CASE("ogl::plain_app"){
    REQUIRE(ogl_plain_app() == 0);
}

} // TEST_SUITE("ogl_basic")
