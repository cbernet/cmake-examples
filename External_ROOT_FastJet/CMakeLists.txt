cmake_minimum_required(VERSION 2.8)

project(external)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -DDROP_CGAL -std=c++11 -stdlib=libc++ -Wall -Wextra -Wpedantic -Wno-unused-variable -Wno-unused-parameter")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")

add_executable(test_external main.cc)

set( CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(ROOT)

if (ROOT_FOUND)
   include_directories(${ROOT_INCLUDE_DIR})
   target_link_libraries(test_external ${ROOT_LIBRARIES})
   message(${ROOT_LIBRARIES})
endif (ROOT_FOUND)

find_package(Fastjet)

if (FASTJET_FOUND)
   include_directories(${FASTJET_INCLUDE_DIR})
   set(FASTJET_LIBS "-L${FASTJET_LIBRARY_DIRS} -lfastjet")
   target_link_libraries(test_external ${FASTJET_LIBS})
   message(${FASTJET_LIBS})
endif (FASTJET_FOUND)
