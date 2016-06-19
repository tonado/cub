FILE(GLOB_RECURSE all_files
*.cpp
*.cc
*.c++
*.c
*.C)

add_library(cub STATIC ${all_files})

install(TARGETS cub ARCHIVE DESTINATION lib)

