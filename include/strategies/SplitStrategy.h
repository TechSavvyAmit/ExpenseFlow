#pragma once

#include <vector>
#include <string>
#include "models/Split.h"

class SplitStrategy {
public:
    virtual std::vector<Split> calculate(
        double amount,
        const std::vector<std::string>& users,
        const std::vector<double>& values
    ) = 0;

    virtual ~SplitStrategy() = default;
};