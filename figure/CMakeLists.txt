cmake_minimum_required(VERSION 3.5)

project(figure LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(figure main.cpp figure.h)

install(TARGETS figure
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
