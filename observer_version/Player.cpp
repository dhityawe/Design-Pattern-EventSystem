#include "Player.h"
#include <algorithm> // For std::remove

void Player::addObserver(IObserver* observer) {
    observers.push_back(observer);
}

void Player::removeObserver(IObserver* observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void Player::setTarget(Enemy* enemy) {
    target = enemy;
}

void Player::attack() {
    if (target) {
        target->takeDamage(10); // Deal 10 damage
        for (auto obs : observers) {
            obs->onAttackOccurred();
        }
    }
}