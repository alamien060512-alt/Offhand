cmake_minimum_required(VERSION 3.15)
project(OffhandClient VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Force a 64-bit dynamic link library deployment output
add_library(${PROJECT_NAME} SHARED)

# Scan and link source directory files automatically
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.h")
target_sources(${PROJECT_NAME} PRIVATE ${SOURCES})

# Target specifically Windows architecture environments
target_compile_definitions(${PROJECT_NAME} PRIVATE WIN32_LEAN_AND_MEAN)
