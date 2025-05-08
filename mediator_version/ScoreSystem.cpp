#include "ScoreSystem.h"
#include <iostream>

ScoreSystem::ScoreSystem(EventMediator& mediator, Enemy& enemy) {
    mediator.subscribe("AttackOccurred", [&enemy]() {
        if (enemy.isDead()) {
            std::cout << "Score Added if Enemy Dead\n";
        }
    });
}