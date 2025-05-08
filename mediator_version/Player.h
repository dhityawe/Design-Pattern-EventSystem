#ifndef PLAYER_H
#define PLAYER_H

#include "EventMediator.h"
#include "Enemy.h"

class Player {
private:
    EventMediator& mediator;
    Enemy* target;

public:
    Player(EventMediator& mediator);
    void setTarget(Enemy* enemy);
    void attack();
};

#endif // PLAYER_H