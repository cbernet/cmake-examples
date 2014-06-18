cmake_minimum_required(VERSION 2.8)

project(lib_hello)

add_library(hello SHARED hello.cc)

install(TARGETS hello DESTINATION lib)
install(FILES ${hello_INCLUDE_DIR}/hello.h DESTINATION include)
