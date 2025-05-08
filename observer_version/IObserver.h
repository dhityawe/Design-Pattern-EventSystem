#ifndef IOBSERVER_H
#define IOBSERVER_H

class IObserver {
public:
    virtual void onAttackOccurred() = 0;
};

#endif // IOBSERVER_H