cmake_minimum_required(VERSION 3.24)
project(Assignment_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Assignment_2 main.cpp Employee.cpp Professional.cpp Nonprofessional.cpp Employee.h Nonprofessional.h Professional.h SingleLinkedList.h SingleLinkedList.cpp)
