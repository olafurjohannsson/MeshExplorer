cmake_minimum_required(VERSION 3.10)
project( gl2c )

set(CMAKE_CXX_STANDARD 17)


add_library(gl2c abstractwindow.cpp abstractscene.cpp application.cpp window.cpp)

