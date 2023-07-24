/**
 * @file gas_app_utils.cpp
 * @brief Implementation of gas_app_utils.h
 * @author sailing-innocent 
 * @date 2023-07-17
*/

#define DOCTEST_CONFIG_IMPLEMENT
#include "gas_app_util.h"
#include <vector>

namespace gas::app {

static std::vector<const char *> args;

int argc() noexcept { return static_cast<int>(args.size()); }
const char *const *argv() noexcept { return args.data(); }

}// namespace gas::app

int main(int argc, const char **argv) {
    doctest::Context context(argc, argv);
    auto test_result = context.run();
    if (context.shouldExit()) { return test_result; }
    return test_result;
}
