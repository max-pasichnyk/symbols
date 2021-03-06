#pragma once

#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateBlockMatch : public IStructurePoolBlockPredicate {

public:
    ~StructurePoolBlockPredicateBlockMatch(); // _ZN37StructurePoolBlockPredicateBlockMatchD2Ev
    virtual void test(Block const&, Random &)const; // _ZNK37StructurePoolBlockPredicateBlockMatch4testERK5BlockR6Random
    StructurePoolBlockPredicateBlockMatch(Block const&); // _ZN37StructurePoolBlockPredicateBlockMatchC2ERK5Block
};
