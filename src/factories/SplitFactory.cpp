#include "factories/SplitFactory.h"
#include "strategies/EqualSplitStrategy.h"
#include "strategies/ExactSplitStrategy.h"
#include "strategies/PercentageSplitStrategy.h"

std::unique_ptr<SplitStrategy> SplitFactory::createStrategy(SplitType type) {

    switch(type) {
        case SplitType::EXACT:
            return std::make_unique<ExactSplitStrategy>();
        
        case SplitType::EQUAL:
            return std::make_unique<EqualSplitStrategy>();

        case SplitType::PERCENTAGE:
            return std::make_unique<PercentageSplitStrategy>();

        default:
            return std::make_unique<EqualSplitStrategy>();
    }
}