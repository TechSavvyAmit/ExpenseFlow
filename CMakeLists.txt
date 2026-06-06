cmake_minimum_required(VERSION 3.16)
project(SplitwiseApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB_RECURSE SOURCES
    src/*.cpp
)

add_executable(splitwise
    main.cpp
    ${SOURCES}
)

add_executable(test_balance
    tests/test_balance.cpp
    ${SOURCES}
)

add_executable(test_group
    tests/test_group.cpp
    ${SOURCES}
)

add_executable(test_split
    tests/test_split.cpp
    ${SOURCES}
)

enable_testing()

add_test(NAME BalanceTest COMMAND test_balance)
add_test(NAME GroupTest COMMAND test_group)
add_test(NAME SplitTest COMMAND test_split)