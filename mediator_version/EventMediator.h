#ifndef EVENTMEDIATOR_H
#define EVENTMEDIATOR_H

#include <map>
#include <vector>
#include <functional>
#include <string>
#include <algorithm> // For std::remove

class EventMediator {
private:
    std::map<std::string, std::vector<std::function<void()>>> handlers;

public:
    void subscribe(const std::string& event, std::function<void()> handler);
    void publish(const std::string& event);
};

#endif // EVENTMEDIATOR_H