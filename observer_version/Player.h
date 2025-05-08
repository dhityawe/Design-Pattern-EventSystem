#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "IObserver.h"
#include "Enemy.h"

class Player {
private:
    std::vector<IObserver*> observers;
    Enemy* target;

public:
    void addObserver(IObserver* observer);
    void removeObserver(IObserver* observer);
    void attack();
    void setTarget(Enemy* enemy);
};

#endif // PLAYER_H