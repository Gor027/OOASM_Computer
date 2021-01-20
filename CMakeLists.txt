cmake_minimum_required(VERSION 3.17)
project(OOASM)

set(CMAKE_CXX_STANDARD 17)

file(GLOB OOASM_SRC
        "*.h"
        "*.cpp"
        )

add_executable(
        OOASM
        ${OOASM_SRC}
)