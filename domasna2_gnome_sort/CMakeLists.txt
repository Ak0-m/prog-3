cmake_minimum_required(VERSION 3.15)
project(GnomeSortProject LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library( gnome_sort_lib src/gnome_sort.cpp)
target_include_directories(gnome_sort_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
