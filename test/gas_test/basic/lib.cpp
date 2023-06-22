/**
 * @file test/gas_test/basic/lib.cpp
 * @author sailing-innocent
 * @date 2023-05-10
 * @brief the hello test to test the library linking
 */

#include <catch2/catch.hpp>

#include "gas.h"

TEST_CASE("test_lib", "[basic]"){
    REQUIRE(gas::return_one() == 1);
}
