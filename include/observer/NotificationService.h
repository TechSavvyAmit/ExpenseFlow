#pragma once

#include <iostream>
#include "observer/Observer.h"

class NotificationService : public Observer {
public:
    void notify(const std::string& message) override;
};