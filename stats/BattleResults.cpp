#include <sstream>
#include "BattleResults.hpp"

std::string BattleResults::ToString() const
{
  std::stringstream ss;

  ss << "Offensive: ";

  if (HasOffensiveAbility)
    {
      ss << OffensiveAbilityDamage;
    }
  else
    {
      ss << "None";
    }

  ss << ", ";
  
  if (HasSupportAbility)
    {
      ss << "Has Support";
    }
  else
    {
      ss << "No Support";
    }

  ss << ", Normal Attack = " << NormalAttackDamage;

  ss << ", Offensive AI = " << CalculateOffensiveAIDamage()/1000;
  return ss.str();
}


int BattleResults::CalculateOffensiveAIDamage() const
{
  float PercentRemaining = 1.0;

  int Damage = 0;
  // 40% chance to use an offensive ability
  if (HasOffensiveAbility)
    {
      PercentRemaining = PercentRemaining - 0.4;
      Damage = OffensiveAbilityDamage * 0.4;
    }

  // 30% chance to use a support ability
  if (HasSupportAbility)
    {
      // 30% of what is left over.
      float ChanceToUseSupport = PercentRemaining * 0.3;

      PercentRemaining = PercentRemaining - ChanceToUseSupport;
    }

  // 100% chance to use a normal attack. Or what is left over
  Damage += PercentRemaining * NormalAttackDamage;

  return Damage;
}
