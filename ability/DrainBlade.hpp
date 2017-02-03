#include "../stats/BattleStats.hpp"
#include "Ability.hpp"
#include "PhysicalSingle.hpp"
#include "HybridSingle.hpp"

#ifndef DRAIN_BLADE_HPP
#define DRAIN_BLADE_HPP

class DrainBlade : public Ability
{
public:

  DrainBlade(std::string name)
    : Ability(name)
  {
  }
  
  bool IsOffensive() const override { return true; };

  // Calculate average offensive damage. Assume 1 DEF.
  int CalculateDamage(const BattleStats bs) const override
  {
    return (DrainBladePhysical.CalculateDamage(bs) + DrainBladeHybrid.CalculateDamage(bs));
  };

private:
  
  
};

static const DrainBlade DrainBladeMateria("Drain Blade");


#endif
