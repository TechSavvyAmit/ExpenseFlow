#pragma once

#include <memory>
#include "enums/SplitType.h"
#include "strategies/SplitStrategy.h"

class SplitFactory {
public:
    static std::unique_ptr<SplitStrategy> createStrategy(SplitType type);
};