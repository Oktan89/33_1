cmake_minimum_required(VERSION 3.0.0)

set(SOURCES main.cpp shop.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(Shopping ${SOURCES})

target_include_directories(Shopping PUBLIC ${MY_INCLUDE_DIR})