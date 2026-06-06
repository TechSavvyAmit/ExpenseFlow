#pragma once

#include <exception>

class InvalidExpenseException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return "Invalid expense";
    }
};