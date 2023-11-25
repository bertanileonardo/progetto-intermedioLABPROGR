cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(progetto-intermedio LANGUAGES CXX)

add_executable(a
    src/Book.cpp
    src/BookShelf.cpp  
    src/Date.cpp
    src/main.cpp  
)