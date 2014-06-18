cmake_minimum_required(VERSION 2.8)

project(external)

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
