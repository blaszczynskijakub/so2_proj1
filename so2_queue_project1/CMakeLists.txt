cmake_minimum_required(VERSION 3.28)
project(so2_queue_project1)

set(CMAKE_CXX_STANDARD 17)

add_executable(so2_queue_project1 main.cpp
        Client.cpp
        Client.h
        Station.cpp
        Station.h
        Director.cpp
        Director.h
        Coordinates.cpp
        Coordinates.h)
