cmake_minimum_required (VERSION 3.0)

if (CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
  message(FATAL_ERROR "In-source build is not allowed")
endif()

project(jhanoi
  LANGUAGES CXX
  HOMEPAGE_URL https://github.com/jeffersonfr/jhanoi
  DESCRIPTION "Hanoi solver"
  VERSION 1.0.0
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hanoi-v01
  hanoi-v01.cpp
)

add_executable(hanoi-v02
  hanoi-v02.cpp
)

add_executable(hanoi-v03
  hanoi-v03.cpp
)

add_executable(th-mysterious
  th-mysterious.cpp
)

