-- set the project name
set_project("graphics-api-sample")

-- add debug and release modes
add_rules("mode.debug", "mode.release")
set_languages("cxx17")

-- our 'gas' library
includes("src")

-- our test environment
target("gas_test")
    set_kind("binary")
    add_includedirs("src", {public = true})
    add_includedirs("test", {public = false})
    add_deps("gas")
    add_files("test/common/gas_app_util.cpp")
    add_files("test/gas_test/**.cpp")
target_end()

-- that's all~
