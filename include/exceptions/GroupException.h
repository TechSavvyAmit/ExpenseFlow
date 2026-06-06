#pragma once

#include <exception>

class GroupException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Group Exception";
    }
};