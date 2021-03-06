#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class InteractActionDefinition : public BehaviorDefinition {

public:
    ~InteractActionDefinition(); // _ZN24InteractActionDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN24InteractActionDefinition4loadEN4Json5ValueERK15BehaviorFactory
    InteractActionDefinition(); // _ZN24InteractActionDefinitionC2Ev
};
