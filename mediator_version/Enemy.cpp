#include "Enemy.h"

bool Enemy::isDead() const {
    return health <= 0;
}

void Enemy::takeDamage(int damage) {
    health -= damage;
}