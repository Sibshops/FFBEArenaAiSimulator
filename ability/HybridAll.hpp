#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef HYBRID_ALL_HPP
#define HYBRID_ALL_HPP

class HybridAll : public Ability
{
public:

  HybridAll(std::string name, float multiplier)
    : Ability(name),
      m_Multiplier(multiplier)
  {
  }
  
  bool IsOffensive() const override { return true; };

  // Calculate average offensive damage. Assume 1 DEF.
  int CalculateDamage(const BattleStats bs) const override
  {
    int physicalDamage = bs.ATK * bs.ATK * m_Multiplier * NUMBER_OF_ENEMY_UNITS * bs.m_PhysicalKiller/ENEMY_DEF;
    int magicalDamage = bs.MAG * bs.MAG * m_Multiplier * NUMBER_OF_ENEMY_UNITS * bs.m_MagicalKiller/ENEMY_SPR;

    int damage = (physicalDamage + magicalDamage)/2;
            
    damage = std::min(MAX_DAMAGE * NUMBER_OF_ENEMY_UNITS, damage);

    if (bs.m_BattleFlags.count(BattleFlags::DualWield))
      {
	damage *= 2;
      }
    
    return damage;
  };

private:
  float m_Multiplier;
};




#endif
