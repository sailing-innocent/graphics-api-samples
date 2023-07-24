/**
 * @file test/gas_test/basic/hello.cpp
 * @author sailing-innocent
 * @date 2023-05-10
 * @brief the hello test to test the testing environment
 */

#include "common/gas_app_util.h"

TEST_SUITE("basic"){

TEST_CASE("test_env"){
    REQUIRE(1 == 1);
}

} // "basic" test suite

