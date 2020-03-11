#pragma once

#include "./Goal.h"
#include "../Squid.h"
#include <string>


class SquidIdleGoal : Goal {

public:
    virtual ~SquidIdleGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SquidIdleGoal(Squid &);
};