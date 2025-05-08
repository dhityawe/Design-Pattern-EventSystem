#ifndef SOUNDSYSTEM_H
#define SOUNDSYSTEM_H

#include "IObserver.h"

class SoundSystem : public IObserver {
public:
    void onAttackOccurred() override;
};

#endif // SOUNDSYSTEM_H