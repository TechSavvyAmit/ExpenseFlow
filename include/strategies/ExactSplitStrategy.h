#pragma once

#include "SplitStrategy.h"

class ExactSplitStrategy : public SplitStrategy
{
public:
    std::vector<Split> calculate(
        double amount,
        const std::vector<std::string> &users,
        const std::vector<double> &values) override;
};