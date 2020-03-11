#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class TakeFlowerGoal : Goal {

public:
    virtual ~TakeFlowerGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    TakeFlowerGoal(Mob &);
};