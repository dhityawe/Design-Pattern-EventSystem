#include "EventMediator.h"
#include "Player.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "Enemy.h"
#include <iostream>
#include <string>

int main() {
    EventMediator mediator;
    Enemy enemy(10); // Enemy starts with 10 HP
    Player player(mediator);
    UI ui(mediator);
    SoundSystem sound(mediator);
    ScoreSystem score(mediator, enemy);

    player.setTarget(&enemy);

    std::string command;
    std::cout << "Type 'Attack' to attack: ";
    std::getline(std::cin, command);

    if (command == "Attack") {
        player.attack(); // Only attack when user types "Attack"
    } else {
        std::cout << "Invalid command. Attack not triggered.\n";
    }

    // Pause before exit (only one Enter required)
    std::cout << "\nPress Enter to exit...";
    std::cin.get(); // Wait for a single Enter key

    return 0;
}