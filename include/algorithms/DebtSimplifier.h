#pragma once

#include <map>
#include <string>

class DebtSimplifier {
public:
    static std::map<std::string,
        std::map<std::string, double>> simplify(
            std::map<std::string,
            std::map<std::string, double>>& balances
        );
};