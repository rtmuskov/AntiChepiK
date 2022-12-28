cmake_minimum_required(VERSION 3.23)
project(AntiChepiK C)

set(CMAKE_C_STANDARD 11)

add_executable(AntiChepiK
        main.c process.c process.h process2.c process2.h)
