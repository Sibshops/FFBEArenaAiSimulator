#include "../stats/BattleStats.hpp"
#include "Ability.hpp"
#include "PhysicalSingle.hpp"
#include "HybridSingle.hpp"

#ifndef OSMOSE_BLADE_HPP
#define OSMOSE_BLADE_HPP

class OsmoseBlade : public Ability
{
public:

  OsmoseBlade(std::string name)
    : Ability(name)
  {
  }
  
  bool IsOffensive() const override { return true; };

  // Calculate average offensive damage. Assume 1 DEF.
  int CalculateDamage(const BattleStats bs) const override
  {
    return (OsmoseBladePhysical.CalculateDamage(bs) + OsmoseBladeHybrid.CalculateDamage(bs));
  };

private:
  
  
};

static const OsmoseBlade OsmoseBladeMateria("Osmose Blade");


#endif
