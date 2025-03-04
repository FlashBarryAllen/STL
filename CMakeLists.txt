cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(my_stl)

include_directories("${CMAKE_SOURCE_DIR}/include/")
#include_directories("../include/systemc/")
#include_directories("../include/spdlog/")
include_directories("${CMAKE_SOURCE_DIR}/include/gtest/")
include_directories("${CMAKE_SOURCE_DIR}/include/gmock/")
include_directories("${CMAKE_SOURCE_DIR}/containers/")
include_directories("${CMAKE_SOURCE_DIR}/containers/sequence_containers/")
include_directories("${CMAKE_SOURCE_DIR}/containers/associative_containers/")
include_directories("${CMAKE_SOURCE_DIR}/allocators/")
include_directories("${CMAKE_SOURCE_DIR}/iterators/")
include_directories("${CMAKE_SOURCE_DIR}/test/")
#include_directories("${CMAKE_SOURCE_DIR}/common/")
#include_directories("${CMAKE_SOURCE_DIR}/peq/")
#include_directories("${CMAKE_SOURCE_DIR}/islip/")
#include_directories("${CMAKE_SOURCE_DIR}/dpa/")
#include_directories("${CMAKE_SOURCE_DIR}/test/")
#include_directories("${CMAKE_SOURCE_DIR}/network/")
#include_directories("${CMAKE_SOURCE_DIR}/sch/")

#link_directories("../libs/systemc/")
#link_directories("../libs/spdlog/")
link_directories("${CMAKE_SOURCE_DIR}/libs/gtest/")
link_directories("${CMAKE_SOURCE_DIR}/libs/gmock/")

add_executable(${PROJECT_NAME} 
    ${CMAKE_SOURCE_DIR}/main.cpp
    ${CMAKE_SOURCE_DIR}/containers/sequence_containers/vector.cpp
    ${CMAKE_SOURCE_DIR}/containers/associative_containers/map.cpp
    ${CMAKE_SOURCE_DIR}/allocators/2_1_1_jjalloc.cpp
    ${CMAKE_SOURCE_DIR}/iterators/3_2_mylist-iter-test.cpp
    ${CMAKE_SOURCE_DIR}/test/test.cpp
)

target_link_libraries(${PROJECT_NAME} debug gtest              optimized gtest)
#target_link_libraries(${PROJECT_NAME} debug pthread            optimized pthread)
#target_link_libraries(${PROJECT_NAME} debug libsystemc_debug.a optimized libsystemc.a)
#target_link_libraries(${PROJECT_NAME} debug libspdlog.a        optimized libspdlog.a)