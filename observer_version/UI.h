#ifndef UI_H
#define UI_H

#include "IObserver.h"

class UI : public IObserver {
public:
    void onAttackOccurred() override;
};

#endif // UI_H