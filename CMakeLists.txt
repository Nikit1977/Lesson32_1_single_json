cmake_minimum_required(VERSION 3.22)
project(1_cinema_info)

set(CMAKE_CXX_STANDARD 14)
set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)
add_executable(1_cinema_info main.cpp)

target_link_libraries(1_cinema_info PRIVATE nlohmann_json::nlohmann_json)