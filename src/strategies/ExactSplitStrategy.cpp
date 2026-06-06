#include "strategies/ExactSplitStrategy.h"
#include "utils/Validator.h"
#include "exceptions/InvalidExpenseException.h"

std::vector<Split> ExactSplitStrategy::calculate(
    double amount,
    const std::vector<std::string> &users,
    const std::vector<double> &values)
{
    if (users.size() != values.size())
    {
        throw InvalidExpenseException();
    }

    if (!Validator::validateExactSplit(amount, values))
    {
        throw InvalidExpenseException();
    }

    std::vector<Split> splits;

    for (size_t i = 0; i < users.size(); i++)
    {
        splits.emplace_back(users[i], values[i]);
    }

    return splits;
}