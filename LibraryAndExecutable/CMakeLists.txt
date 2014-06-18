cmake_minimum_required(VERSION 2.8)

project(app_project)

add_library(hello SHARED hello.cc)

add_executable(myapp main.cc)
target_link_libraries(myapp hello)

set(CMAKE_INSTALL_PREFIX _install)
install(TARGETS hello DESTINATION lib)
install(FILES hello.h DESTINATION include)
install(TARGETS myapp DESTINATION bin)
