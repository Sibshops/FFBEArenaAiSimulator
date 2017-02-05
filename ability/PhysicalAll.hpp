#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef PHYSICAL_ALL_HPP
#define PHYSICAL_ALL_HPP

class PhysicalAll : public Ability
{
public:

  PhysicalAll(std::string name, float multiplier)
    : Ability(name),
      m_Multiplier(multiplier)
  {}
  
  bool IsOffensive() const override { return true; };

  // Calculate average offensive damage. Assume 1 DEF.
  int CalculateDamage(const BattleStats bs) const override
  {
    int damage = bs.ATK * bs.ATK * m_Multiplier * NUMBER_OF_ENEMY_UNITS * bs.m_PhysicalKiller / ENEMY_DEF;

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

static const PhysicalAll HitAll("HitAll", 1.8);
static const PhysicalAll AutoBowgun("AutoBowgun", 1.3);
static const PhysicalAll Darkside("Darkside", 1.5);
static const PhysicalAll Scattershot("Scattershot", 1.1);
static const PhysicalAll Multiburst("Multiburst", 1.5);
static const PhysicalAll Bladeblitz("Bladeblitz", 1.4);
static const PhysicalAll AreaBlast("AreaBlast", 1.8);

#endif
