#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include "EventMediator.h"
#include "Enemy.h"

class ScoreSystem {
public:
    ScoreSystem(EventMediator& mediator, Enemy& enemy);
};

#endif // SCORESYSTEM_H