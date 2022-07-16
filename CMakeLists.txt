cmake_minimum_required(VERSION 3.22)
project(Tetris)

add_executable(tetris main.cpp)

find_package(SFML 2 COMPONENTS graphics window system REQUIRED)

target_compile_features(tetris PUBLIC cxx_std_17)

target_link_libraries(tetris sfml-system sfml-graphics sfml-window)