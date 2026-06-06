#include "strategies/PercentageSplitStrategy.h"
#include "utils/Validator.h"
#include "exceptions/InvalidExpenseException.h"

std::vector<Split> PercentageSplitStrategy::calculate(
    double amount,
    const std::vector<std::string> &users,
    const std::vector<double> &values)
{
    if (users.size() != values.size())
    {
        throw InvalidExpenseException();
    }

    if (!Validator::validatePercentageSplit(values))
    {
        throw InvalidExpenseException();
    }

    std::vector<Split> splits;

    for (size_t i = 0; i < users.size(); i++)
    {
        double splitAmount = amount * values[i] / 100.0;
        splits.emplace_back(users[i], splitAmount);
    }

    return splits;
}