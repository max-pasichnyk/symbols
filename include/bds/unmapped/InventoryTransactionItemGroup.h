#pragma once

#include "../bedrock/item/ItemStack.h"
#include "./InventoryTransactionItemGroup.h"


class InventoryTransactionItemGroup {

public:

    ~InventoryTransactionItemGroup();
    InventoryTransactionItemGroup(InventoryTransactionItemGroup const&);
    void getCount()const;
    bool hasOverflow()const;
    void getItemInstance()const;
    void add(ItemStack const&, int);
    InventoryTransactionItemGroup(ItemStack const&, int);
    void equals(ItemStack const&)const;
    void _itemAuxMatch(int)const;
    InventoryTransactionItemGroup(InventoryTransactionItemGroup &&);
};