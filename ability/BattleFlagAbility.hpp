#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef BATTLE_FLAG_ABILITY_HPP
#define BATTLE_FLAG_ABILITY_HPP

class BattleFlagAbility : public Ability
{
public:

  BattleFlagAbility(std::string name, const BattleFlags bf)
    : Ability(name),
      m_BattleFlag(bf)
  {}
		    
  bool IsStats() const override { return true;} ;

  void ModifyStats(BattleStats& bs) const override
  {
    bs.m_BattleFlags.insert(m_BattleFlag);
  };

  BattleFlags m_BattleFlag;
};

static const BattleFlagAbility DualWield("Dual Wield", BattleFlags::DualWield);

static const BattleFlagAbility TwoHitCombo("TwoHitCombo", BattleFlags::TwoHitCombo);
#endif
