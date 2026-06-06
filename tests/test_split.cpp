#include <cassert>
#include "strategies/EqualSplitStrategy.h"

int main() {

    EqualSplitStrategy strategy;

    std::vector<std::string> users = {
        "u1","u2","u3"
    };

    auto result =
        strategy.calculate(300.0, users, {});

    assert(result.size() == 3);
    assert(result[0].amount == 100.0);

    return 0;
}