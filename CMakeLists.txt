cmake_minimum_required(VERSION 3.10)
project( MeshExplorer )

set(CMAKE_CXX_STANDARD 17)
SET (Qt5_DIR "/opt/Qt5.12.0/5.12.0/gcc_64/lib/cmake/Qt5" )
set(CMAKE_AUTOMOC ON)
find_package(Qt5 5.12 COMPONENTS Core Qml Quick Svg Xml REQUIRED)

add_subdirectory(libs)

add_executable(MeshExplorer main.cpp meshexplorer.h)

TARGET_LINK_LIBRARIES(MeshExplorer
        pthread
        gl2c
        dl
        GL
        Qt5::Quick
        Qt5::Xml)