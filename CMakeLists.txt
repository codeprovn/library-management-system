cmake_minimum_required(VERSION 3.10)

project(LibraryApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

set(SOURCES
    src/main.cpp
    src/menu.cpp
    src/muontra.cpp
    src/sach.cpp
    src/sinhvien.cpp
)

# create executable
add_executable(library ${SOURCES})