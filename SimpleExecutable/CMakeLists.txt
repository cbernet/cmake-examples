cmake_minimum_required(VERSION 2.8)

project(app_project)

add_executable(myapp main.cc)
set(CMAKE_INSTALL_PREFIX _install)
install(TARGETS myapp DESTINATION bin)
