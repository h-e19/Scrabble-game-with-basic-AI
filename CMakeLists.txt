cmake_minimum_required(VERSION 3.28)
project(scrabble)

set(CMAKE_CXX_STANDARD 17)

set(SDL2_DIR "C/Program Files/SDL2")

include_directories(${SDL2_DIR}/include)
link_directories(${SDL2_DIR}/lib)

find_package(SDL2 REQUIRED)

add_executable(scrabble src/main.cpp
        src/Game.h
        src/Game.cpp)

target_link_libraries(scrabble SDL2main SDL2)