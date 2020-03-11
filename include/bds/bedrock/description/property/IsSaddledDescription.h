#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class IsSaddledDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~IsSaddledDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsSaddledDescription();
};