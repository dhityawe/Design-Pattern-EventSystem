#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include "IObserver.h"
#include "Enemy.h"

class ScoreSystem : public IObserver {
private:
    Enemy* target;

public:
    ScoreSystem(Enemy* enemy) : target(enemy) {}
    void onAttackOccurred() override;
};

#endif // SCORESYSTEM_H