#include "Player.h"

Player::Player(EventMediator& mediator) : mediator(mediator) {}

void Player::setTarget(Enemy* enemy) {
    target = enemy;
}

void Player::attack() {
    if (target) {
        target->takeDamage(10);
        mediator.publish("AttackOccurred");
    }
}