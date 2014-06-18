cmake_minimum_required(VERSION 2.8)

project(hello)

set(hello_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

include_directories(${hello_INCLUDE_DIR})
add_executable(test_hello main.cc)
target_link_libraries(test_hello hello)

set(CMAKE_INSTALL_PREFIX _install)
install(TARGETS test_hello DESTINATION bin)

add_subdirectory(src)
