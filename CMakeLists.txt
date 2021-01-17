cmake_minimum_required(VERSION 3.17)
project(OOASM)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOASM main.cpp ooasm.h computer.h Program.h Instruction.h Flags.h Id.h Num.h Memory.h Program.cpp Flags.cpp Id.cpp Num.cpp computer.cpp ooasm.cpp)