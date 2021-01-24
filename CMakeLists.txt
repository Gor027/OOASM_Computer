cmake_minimum_required(VERSION 3.17)
project(OOASM)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_FLAGS "-Wall -Wextra -O2 -std=c++17")

file(GLOB OOASM_SRC
        "*.h"
        "*.cc"
        #        Uncomment the lines to run & test
        #                "tests/ooasm_grzesiek.cc"
        #                "tests/ooasm_szulc.cc"
        #                "tests/main.cc"
        )

add_executable(
        OOASM
        ${OOASM_SRC}
)