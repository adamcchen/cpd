cmake_minimum_required(VERSION 3.15)
project(cpp_study)

set(CMAKE_CXX_STANDARD 14)

set(GTEST_HOME /Users/chencheng/googletest)
set(L ${L} ${GTEST_HOME}/build/lib)
set(I ${I} ${GTEST_HOME}/googletest/include)
set(l ${l} gtest)

set(I ${I} include)

link_directories(${L})
include_directories(${I})
link_libraries(${l})

aux_source_directory(src DUT_SOURCEFILES)
aux_source_directory(test TEST_SOURCEFILES)

add_executable(a.out ${DUT_SOURCEFILES} ${TEST_SOURCEFILES})