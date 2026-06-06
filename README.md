# Splitwise Low Level Design Project

## Features

- Equal Split
- Exact Split
- Percentage Split
- Group Expense Management
- Debt Simplification
- Observer Pattern
- Factory Pattern
- Strategy Pattern
- Modular Architecture

---

## Design Patterns Used

| Pattern | Usage |
|--------|--------|
| Strategy | Expense splitting |
| Factory | Strategy creation |
| Observer | Notifications |
| Singleton | App Manager |

---

## Tech Stack

- C++17
- CMake
- OOPS
- STL

---

## Build

cmake -S . -B build -G "MinGW Makefiles"
cmake --build build

## Run

.\build\splitwise.exe

## Run Tests

cd build
ctest --verbose