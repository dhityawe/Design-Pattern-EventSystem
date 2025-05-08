#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
private:
    int health;

public:
    Enemy(int hp) : health(hp) {}
    bool isDead() const;
    void takeDamage(int damage);
};

#endif // ENEMY_H