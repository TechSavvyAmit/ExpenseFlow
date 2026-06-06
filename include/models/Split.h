#pragma once

#include <string>

class Split {
public:
    std::string userId;
    double amount;

    Split(const std::string& userId, double amount);
};