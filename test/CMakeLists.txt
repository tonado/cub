project(cub-test)

include_directories(${MAGELLAN_INCLUDE_DIR})

if(UNIX)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
endif()

FILE(GLOB_RECURSE all_files
*.cpp
*.cc
*.c++
*.c
*.C)

add_executable(cub-test ${all_files})
target_link_libraries(cub-test cut cum cpo cub)
