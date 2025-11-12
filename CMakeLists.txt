cmake_minimum_required(VERSION 3.10)
project(BankManagementSystem)

set(CMAKE_CXX_STANDARD 17)

# List all your source files here
set(SRC_FILES
    src/main.cpp
    src/Bank.cpp
    src/Bank.h
)

# Define the executable
add_executable(BankSystem ${SRC_FILES})
