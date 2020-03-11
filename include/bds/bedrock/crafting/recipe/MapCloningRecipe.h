#pragma once

#include "../../../mce/UUID.h"
#include "./MultiRecipe.h"
#include "../../container/CraftingContainer.h"
#include "../../level/Level.h"
#include <string>


class MapCloningRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    virtual ~MapCloningRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    MapCloningRecipe(std::string, mce::UUID const&);
    void _getTagForUUID(mce::UUID const&);
};