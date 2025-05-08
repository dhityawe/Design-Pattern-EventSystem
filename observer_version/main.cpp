#include "Player.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "Enemy.h"
#include <iostream>  // Required for input/output
#include <string>    // Required for string handling

int main() {
    Enemy enemy(10); // Enemy starts with 10 HP
    Player player;
    UI ui;
    SoundSystem sound;
    ScoreSystem score(&enemy);

    player.setTarget(&enemy);
    player.addObserver(&ui);
    player.addObserver(&sound);
    player.addObserver(&score);

    std::string command;
    std::cout << "Type 'Attack' to attack: ";
    std::getline(std::cin, command);

    if (command == "Attack") {
        player.attack(); // Triggers all listeners
    } else {
        std::cout << "Invalid command. Attack not triggered.\n";
    }

    // Add pause before exit
    std::cout << "\nPress Enter to exit...";
    std::cin.ignore(); // Clear newline character
    std::cin.get();    // Wait for Enter key

    return 0;
}