#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef HYBRID_SINGLE_HPP
#define HYBRID_SINGLE_HPP

class HybridSingle : public Ability
{
public:

  HybridSingle(std::string name, float multiplier)
    : Ability(name),
      m_Multiplier(multiplier)
  {
  }
  
  bool IsOffensive() const override { return true; };

  // Calculate average offensive damage. Assume 1 DEF.
  int CalculateDamage(const BattleStats bs) const override
  {
    int physicalDamage = bs.ATK * bs.ATK * m_Multiplier * bs.m_PhysicalKiller/ENEMY_DEF;
    int magicalDamage = bs.MAG * bs.MAG * m_Multiplier * bs.m_MagicalKiller/ENEMY_SPR;

    int damage = (physicalDamage + magicalDamage)/2;

    damage = std::min(MAX_DAMAGE, damage);
    
    if (bs.m_BattleFlags.count(BattleFlags::DualWield))
      {
	damage *= 2;
      }

    return damage;
  };

private:
  float m_Multiplier;
};

static const HybridSingle WindShear("Wind Shear", 5.4);
static const HybridSingle DrainBladeHybrid("Drain Blade Hybrid", 1.4);
static const HybridSingle OsmoseBladeHybrid("Osmose Blade Hybrid", 1.4);


#endif
