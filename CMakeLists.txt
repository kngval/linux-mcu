cmake_minimum_required(VERSION 3.20)

project(mcu
        VERSION 1.0
        LANGUAGES CXX
        )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# -- WARNINGS --
add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(mcu-ls ./src/ls.cpp)
add_executable(mcu-cat ./src/cat.cpp)
add_executable(mcu-pwd ./src/pwd.cpp)

install(TARGETS mcu-ls
                mcu-cat
                mcu-pwd
                RUNTIME DESTINATION bin
)
