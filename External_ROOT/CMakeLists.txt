cmake_minimum_required(VERSION 2.8)

project(external)

add_executable(test_external main.cc)

set( CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
find_package(ROOT)

if (ROOT_FOUND)
   message(${ROOT_INCLUDE_DIR})
   message(${ROOT_LIBRARIES})
   include_directories(${ROOT_INCLUDE_DIR})
   target_link_libraries(test_external ${ROOT_LIBRARIES})
endif (ROOT_FOUND)
