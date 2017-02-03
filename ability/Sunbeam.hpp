#include <iostream>

#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef SUNBEAM_HPP
#define SUNBEAM_HPP

class Sunbeam : public Ability
{
public:

  Sunbeam()
    : Ability("Sunbeam", Rule::StatusAilment)
  {
  }
    
  
  bool IsOffensive() const override { return true; };
  
  // Calculate average offensive damage. Assume 1 DEF.
  int CalculateDamage(const BattleStats bs) const override
  {
    int damage = bs.MAG * bs.MAG * 1.2 * NUMBER_OF_ENEMY_UNITS * bs.m_PhysicalKiller / ENEMY_SPR;

    // std::cout << "Sunbeam: Mag" <<  bs.MAG << " dam: " << damage << std::endl;
    
    damage = std::min(MAX_DAMAGE * NUMBER_OF_ENEMY_UNITS, damage);
    if (bs.m_BattleFlags.count(BattleFlags::DualWield))
      {
	damage *= 2;
      }


    return damage;
  };
};

static const Sunbeam SunbeamMateria;

#endif
