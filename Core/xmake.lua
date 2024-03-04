target("Core")
    set_kind("binary")

    add_headerfiles("**.h")
    add_files("**.cpp")
    add_includedirs("include", "src", {public = true})
target_end()