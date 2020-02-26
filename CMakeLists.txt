cmake_minimum_required(VERSION 3.15)
project(cppsfml)

set(CMAKE_CXX_STANDARD 14)



include_directories(.)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
add_executable(cppsfml
        main.cpp SortArray.cpp SortArray.h Display.cpp Display.h util.cpp util.h)
target_link_libraries(cppsfml /usr/lib/x86_64-linux-gnu/libsfml-window.so
        /usr/lib/x86_64-linux-gnu/libsfml-graphics.so libsfml-system.so )