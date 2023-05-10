/**
 * @file test/gas_test/basic/hello.cpp
 * @author sailing-innocent
 * @date 2023-05-10
 * @brief the hello test to test the testing environment
 */

#include <catch2/catch.hpp>

TEST_CASE("test_env", "[basic]"){
    REQUIRE(1 == 1);
}