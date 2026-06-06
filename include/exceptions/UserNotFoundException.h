#pragma once

#include <exception>

class UserNotFoundException : public std::exception {
public:
    const char* what() const noexcept override {
        return "User Not Found";
    }
};