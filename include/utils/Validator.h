#pragma once

#include <vector>
#include <string>

class Validator
{
public:
    static bool validateExactSplit(
        double total,
        const std::vector<double> &values);

    static bool validatePercentageSplit(
        const std::vector<double> &values);

    static bool validateEqualSplit(
        const std::vector<std::string> &users);
};