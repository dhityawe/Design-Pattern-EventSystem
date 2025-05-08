#include "SoundSystem.h"
#include <iostream>

SoundSystem::SoundSystem(EventMediator& mediator) {
    mediator.subscribe("AttackOccurred", []() {
        std::cout << "Play Attack Sound\n";
    });
}