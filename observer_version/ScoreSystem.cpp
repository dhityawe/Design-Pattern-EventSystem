#include "ScoreSystem.h"
#include <iostream>

void ScoreSystem::onAttackOccurred() {
    if (target && target->isDead()) {
        std::cout << "Score Added if Enemy Dead\n";
    }
}