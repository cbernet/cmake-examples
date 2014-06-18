cmake_minimum_required(VERSION 2.8)

project(external)

add_executable(test_external main.cc)

find_package(BZip2)

if (BZIP2_FOUND)
   message(${BZIP2_INCLUDE_DIR})
   message(${BZIP2_LIBRARIES})
   include_directories(${BZIP2_INCLUDE_DIR})
   target_link_libraries(test_external ${BZIP2_LIBRARIES})
endif (BZIP2_FOUND)
