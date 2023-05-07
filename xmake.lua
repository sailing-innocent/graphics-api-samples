-- set the project name
set_project("graphics-api-sample")

-- add debug and release modes
add_rules("mode.debug", "mode.release")

-- set our target "hello.exe"
target("hello")
    -- add our source files 
    add_files("src/hello.cpp")
target_end()

-- that's all~
