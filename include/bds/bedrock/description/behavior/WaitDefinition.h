#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class WaitDefinition : public BehaviorDefinition {

public:
    ~WaitDefinition(); // _ZN14WaitDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN14WaitDefinition4loadEN4Json5ValueERK15BehaviorFactory
    WaitDefinition(); // _ZN14WaitDefinitionC2Ev
};
