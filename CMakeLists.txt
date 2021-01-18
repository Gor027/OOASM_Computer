cmake_minimum_required(VERSION 3.17)
project(OOASM)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOASM main.cpp ooasm.h computer.h Program.h Instruction.h Flags.h Id.h Expression.h Lvalue.h Rvalue.h Num.h Lea.h Mem.h Memory.h Program.cpp Flags.cpp Id.cpp Num.cpp Lea.cpp Mem.cpp computer.cpp ooasm.cpp Memory.cpp)