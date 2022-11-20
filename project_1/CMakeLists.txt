project(game)

cmake_minimum_required(VERSION 3.16)

add_executable(game src/main.cpp src/game.cpp)

target_include_directories(game PUBLIC include)
