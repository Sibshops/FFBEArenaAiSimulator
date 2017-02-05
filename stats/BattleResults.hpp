#include <set>
#include <string>
#include "BattleFlags.hpp"

#ifndef BATTLE_RESULTS_HPP
#define BATTLE_RESULTS_HPP

class BattleResults
{
public:
  
  bool HasOffensiveAbility = false;
  int OffensiveAbilityDamage = 0;

  bool HasSupportAbility = false;

  int NormalAttackDamage = 0;

  std::string StrongestAbility;
  int StrongestAbilityDamage = 0;
  
  int CalculateOffensiveAIDamage() const;
  
  std::string ToString() const;
};



#endif
