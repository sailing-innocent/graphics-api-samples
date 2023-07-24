//
// Created by sailing-innocent 2023/07/24
//

#pragma once 

#include "doctest.h"

namespace gas::app {

[[nodiscard]] int argc() noexcept;
[[nodiscard]] const char *const *argv() noexcept;

}// namespace gas::app