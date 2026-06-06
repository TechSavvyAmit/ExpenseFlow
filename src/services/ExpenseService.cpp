#include "services/ExpenseService.h"
#include "factories/SplitFactory.h"

Expense* ExpenseService::createExpense(
    const std::string& description,
    double amount,
    const std::string& paidBy,
    const std::vector<std::string>& users,
    SplitType splitType,
    const std::vector<double>& values
) {

    auto strategy = SplitFactory::createStrategy(splitType);

    auto splits = strategy->calculate(amount, users, values);

    return new Expense(description, amount, paidBy, splits);
}

void ExpenseService::applyBalances(
    Group* group,
    Expense* expense
) {

    for (const auto& split : expense->splits) {

        if (split.userId == expense->paidBy) {
            continue;
        }

        group->balances[expense->paidBy][split.userId] += split.amount;

        group->balances[split.userId][expense->paidBy] -= split.amount;
    }
}