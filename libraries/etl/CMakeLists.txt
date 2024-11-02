cmake_minimum_required(VERSION 3.30)
project(etl_demo CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(spdlog REQUIRED)
find_package(etl REQUIRED)

add_executable(etl_demo src/main.cpp)
target_sources(etl_demo PRIVATE
    src/track_heap.hpp
    src/track_heap.cpp
)
target_link_libraries(etl_demo PRIVATE
    spdlog::spdlog
    etl::etl
)
