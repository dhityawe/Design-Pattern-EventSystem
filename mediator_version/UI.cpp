#include "UI.h"
#include <iostream>

UI::UI(EventMediator& mediator) {
    mediator.subscribe("AttackOccurred", []() {
        std::cout << "Enemy HP Updated\n";
    });
}