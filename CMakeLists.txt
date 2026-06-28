cmake_minimum_required(VERSION 3.15)
project(OffhandClient VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Configure output target as a shared library module (DLL)
add_library(${PROJECT_NAME} SHARED)

# Scan and map the source tree directory code layout automatically
file(GLOB_RECURSE SOURCES "src/*.cpp")
target_sources(${PROJECT_NAME} PRIVATE ${SOURCES})

# Explicitly link necessary system dependencies for memory manipulation
target_compile_definitions(${PROJECT_NAME} PRIVATE WIN32_LEAN_AND_MEAN)
target_link_libraries(${PROJECT_NAME} PRIVATE ntdll user32 kernel32)
