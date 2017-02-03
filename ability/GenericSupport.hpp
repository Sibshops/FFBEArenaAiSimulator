#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef GENERIC_SUPPORT_HPP
#define GENERIC_SUPPORT_HPP

class GenericSupport : public Ability
{
public:
  GenericSupport(std::string name)
    : Ability(name)
  {}
  
  bool IsSupport() const override { return true; };
};

static const GenericSupport Advance("Advance");
static const GenericSupport BattleRoar("BattleRoar");
static const GenericSupport Barfire("Barfire");
static const GenericSupport Barfira("Barfira");
static const GenericSupport Barblizzard("Barblizzard");
static const GenericSupport Barblizzara("Barblizzara");
static const GenericSupport Barthunder("Barthunder");
static const GenericSupport Barthundara("Barthundara");
static const GenericSupport Brace("Brace");
static const GenericSupport Comeback("Comeback");
static const GenericSupport Faith("Faith");
static const GenericSupport Focus("Focus");
static const GenericSupport HeartOfLight("Heart of Light");
static const GenericSupport Mirage("Mirage");
static const GenericSupport OmniVeil("OmniVeil");
static const GenericSupport Protect("Protect");
static const GenericSupport Protectga("Protectga");
static const GenericSupport Shell("Shell");
static const GenericSupport SongOfAttack("Song of Attack");
static const GenericSupport Store("Store");
static const GenericSupport Defend("Defend");
static const GenericSupport Leadership("Leadership");
static const GenericSupport DanceTune("DanceTune");
static const GenericSupport SlowBallad("SlowBallad");
static const GenericSupport PreChorus("PreChorus");



#endif
