/**
 * @file test/gas_test/basic/lib.cpp
 * @author sailing-innocent
 * @date 2023-05-10
 * @brief the hello test to test the library linking
 */

#include "common/gas_app_util.h"

#include "gas.h"

TEST_SUITE("basic") {

TEST_CASE("test_lib"){
    REQUIRE(gas::return_one() == 1);
}

} // "basic" TEST SUITE

