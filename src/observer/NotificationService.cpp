#include "observer/NotificationService.h"

void NotificationService::notify(const std::string& message) {
    std::cout << "[NOTIFICATION] " << message << std::endl;
}