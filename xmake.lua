set_project("graphics-api-sample")

add_rules("mode.debug", "mode.release")

target("hello")
    add_files("src/hello.cpp")
target_end()