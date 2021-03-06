#pragma once

#include <string>


namespace VanillaStates {

    static long AgeBit;
    static long Age;
    static long AttachedBit;
    static long PortalAxis;
    static long BiteCounter;
    static long BrewingStandSlotABit;
    static long BrewingStandSlotBBit;
    static long BrewingStandSlotCBit;
    static long ButtonPressedBit;
    static long ConditionalBit;
    static long CoveredBit;
    static long Damage;
    static long DisarmedBit;
    static long DoorHingeBit;
    static long UpperBlockBit;
    static long Direction;
    static long EndPortalEyeBit;
    static long ExplodeBit;
    static long FacingDirection;
    static long FillLevel;
    static long Growth;
    static long HeadPieceBit;
    static long Height;
    static long InfiniburnBit;
    static long InWallBit;
    static long LiquidDepth;
    static long MoisturizedAmount;
    static long NoDropBit;
    static long KelpAge;
    static long OccupiedBit;
    static long OpenBit;
    static long OutputSubtractBit;
    static long OutputLitBit;
    static long PersistentBit;
    static long PoweredBit;
    static long RailDataBit;
    static long RailDirection;
    static long RedstoneSignal;
    static long RepeaterDelay;
    static long SuspendedBit;
    static long ToggleBit;
    static long TopSlotBit;
    static long TriggeredBit;
    static long UpdateBit;
    static long UpsideDownBit;
    static long VineDirectionBits;
    static long AllowUnderwaterBit;
    static long ColorBit;
    static long DeadBit;
    static long ClusterCount;
    static long ItemFrameMapBit;
    static long SaplingType;
    static long TorchFacingDirection;
    static long DragDown;
    static long TurtleEggCount;
    static long CrackedState;
    static long StandingRotation;
    static long WeirdoDirection;
    static long CoralDirection;
    static long Color;
    static long BambooThickness;
    static long BambooLeafSize;
    static long Stability;
    static long StabilityCheckBit;
    static long WoodType;
    static long StoneType;
    static long DirtType;
    static long SandType;
    static long OldLogType;
    static long NewLogType;
    static long ChiselType;
    static long DEPRECATED;
    static long OldLeafType;
    static long NewLeafType;
    static long SpongeType;
    static long SandStoneType;
    static long TallGrassType;
    static long FlowerType;
    static long StoneSlabType;
    static long StoneSlabType2;
    static long StoneSlabType3;
    static long StoneSlabType4;
    static long MonsterEggStoneType;
    static long StoneBrickType;
    static long HugeMushroomBits;
    static long WallBlockType;
    static long PrismarineBlockType;
    static long DoublePlantType;
    static long ChemistryTableType;
    static long SeaGrassType;
    static long CoralColor;
    static long CauldronLiquid;
    static long HangingBit;
    static long StrippedBit;
    static long CoralHangTypeBit;
    static long Attachment;
    static long StructureVoidType;
    static long StructureBlockType;
    static long Extinguished;
    static long ComposterFillLevel;
    static long CoralFanDirection;
    static long LeverDirection;
    static long PillarAxis;
    static long BlockLightLevel;
    static long BeehiveHoneyLevel;

    void registerStates(); // _ZN13VanillaStates14registerStatesEv
    void unregisterStates(); // _ZN13VanillaStates16unregisterStatesEv
    void getState(std::string const&); // _ZN13VanillaStates8getStateERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
