#include "strategies/EqualSplitStrategy.h"
#include "utils/Validator.h"
#include "exceptions/InvalidExpenseException.h"

std::vector<Split> EqualSplitStrategy::calculate(
    double amount,
    const std::vector<std::string> &users,
    const std::vector<double> &values)
{
    if (users.empty())
    {
        throw InvalidExpenseException();
    }

    if (!Validator::validateEqualSplit(users))
    {
        throw InvalidExpenseException();
    }

    std::vector<Split> splits;

    double splitAmount = amount / users.size();

    for (const auto &user : users)
    {
        splits.emplace_back(user, splitAmount);
    }

    return splits;
}