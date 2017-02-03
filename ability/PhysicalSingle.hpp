#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef PHYSICAL_SINGLE_HPP
#define PHYSICAL_SINGLE_HPP

class PhysicalSingle : public Ability
{
public:

  PhysicalSingle(std::string name, float multiplier, int numberHits)
    : Ability(name),
      m_Multiplier(multiplier),
      m_NumberHits(numberHits)
  {
  }

  PhysicalSingle(std::string name, float multiplier, int numberHits, Rule rule)
    : Ability(name, rule),
      m_Multiplier(multiplier),
      m_NumberHits(numberHits)
  {
  }

  bool IsOffensive() const override { return true; };

  // Calculate average offensive damage. Assume 1 DEF.
  int CalculateDamage(const BattleStats bs) const override
  {
    int damage = bs.ATK * bs.ATK * m_Multiplier * bs.m_PhysicalKiller/ ENEMY_DEF;

    damage = std::min(MAX_DAMAGE * m_NumberHits, damage);
    
    if (bs.m_BattleFlags.count(BattleFlags::DualWield))
      {
	damage *= 2;
      }

    return damage;
  };

private:
  float m_Multiplier;
  int m_NumberHits;
  
};

static const PhysicalSingle Aim("Aim", 1.2, 1);
static const PhysicalSingle Aquastrike("Aquastrike", 1.5, 1, Rule::Water);
static const PhysicalSingle ArmorBreak("ArmorBreak", 1.2, 1);
static const PhysicalSingle AuraBall("AuraBall", 0.0, 1);
static const PhysicalSingle Barrage("Barrage", 3.2, 4);
static const PhysicalSingle BlazingGlory("BlazingGlory", 1.8 / (1.0-0.3), 1);
static const PhysicalSingle BurstShot("BurstShot", 1.5, 1);
static const PhysicalSingle Froststrike("Froststrike", 1.4, 1);
static const PhysicalSingle CallOfTheVoid("Call of the Void", 2.1/(1.0-0.25), 1);
static const PhysicalSingle CutThrough("CutThrough", 2.5*1.33, 1);
static const PhysicalSingle DivingStrike("DivingStrike", 2.3, 1);
static const PhysicalSingle DrainBladePhysical("Drain Blade Physical", 0.8, 1);
static const PhysicalSingle Drainlash("Drainlash", 0.8, 1);
static const PhysicalSingle Flamelash("Flamelash", 2.2, 1);
static const PhysicalSingle Frostlash("Frostlash", 2.2, 1);
static const PhysicalSingle GaleBarrage("GaleBarrage", 4.0, 5);
static const PhysicalSingle HyperFire("HyperFire", (2.0+5.0) / 2.0 * 0.8, 3);
static const PhysicalSingle Osmoselash("Osmoselash", 0.3, 1);
static const PhysicalSingle PowerShot("PowerShot", 1.2, 1);
static const PhysicalSingle SeakerBlade("SeakerBlade", 2.7, 1);
static const PhysicalSingle Thunderlash("Thunderlash", 2.2, 1);
static const PhysicalSingle RagingFist("Raging Fist", 1.2/(1.0-0.25), 1);
static const PhysicalSingle PowerBreak("PowerBreak", 1.2, 1);
static const PhysicalSingle MagicBreak("MagicBreak", 1.2, 1);
static const PhysicalSingle LavaFloor("LavaFloor", 1.8, 1);
static const PhysicalSingle Undermine("Undermine", 1.7, 1);

#endif
