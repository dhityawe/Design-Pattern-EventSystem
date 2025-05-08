#include "EventMediator.h"
#include <iostream>
#include <algorithm> // For std::remove

void EventMediator::subscribe(const std::string& event, std::function<void()> handler) {
    handlers[event].push_back(handler);
}

void EventMediator::publish(const std::string& event) {
    for (auto& handler : handlers[event]) {
        handler();
    }
}