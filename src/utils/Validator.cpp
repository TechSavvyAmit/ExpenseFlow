#include "utils/Validator.h"
#include <cmath>

bool Validator::validateExactSplit(
    double totalAmount,
    const std::vector<double> &values)
{
    double sum = 0;

    for (double value : values)
    {
        sum += value;
    }

    return std::abs(sum - totalAmount) < 0.01;
}

bool Validator::validatePercentageSplit(
    const std::vector<double> &percentages)
{
    double sum = 0;

    for (double percentage : percentages)
    {
        sum += percentage;
    }

    return std::abs(sum - 100.0) < 0.01;
}

bool Validator::validateEqualSplit(
    const std::vector<std::string> &users)
{
    return !users.empty();
}