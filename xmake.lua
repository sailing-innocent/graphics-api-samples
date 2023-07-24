-- set the project name
set_project("graphics-api-sample")

-- add debug and release modes
add_rules("mode.debug", "mode.release")

-- our 'gas' library
includes("src")

-- ************************************************************
-- OGL BRANCH DEPENDENCIES BEGIN
-- ************************************************************
add_requires("glfw")
-- ************************************************************
-- OGL BRANCH DEPENDENCIES END
-- ************************************************************

add_includedirs("external", {public = true})

-- our test environment
target("gas_test")
    set_kind("binary")
    add_packages("glfw")
    add_includedirs("src", {public = true})
    add_includedirs("test", {public = false})
    add_deps("gas")
    add_files("test/gas_test/**.cpp")
target_end()

-- that's all~