target("gas") -- *g*raphics *a*pi *s*amples
    set_kind("static")
    -- OGL BRANCH DEPENDENCIES BEGIN
    add_packages("glfw")
    -- OGL BRANCH DEPENDENCIES END
    add_includedirs("./", {public = true})
    add_files("**.cpp")
target_end()