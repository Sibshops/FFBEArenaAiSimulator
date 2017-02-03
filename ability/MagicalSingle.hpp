#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef MAGICAL_SINGLE_HPP
#define MAGICAL_SINGLE_HPP

class MagicalSingle : public Ability
{
public:

  MagicalSingle(std::string name, float multiplier)
    : Ability(name),
      m_Multiplier(multiplier)
  {
  }

  MagicalSingle(std::string name, float multiplier, Rule rule)
    : Ability(name, rule),
      m_Multiplier(multiplier)
  {
  }

  bool IsOffensive() const override { return true; };

  // Calculate average offensive damage. Assume 1 DEF.
  int CalculateDamage(const BattleStats bs) const override
  {
    int damage = bs.MAG * bs.MAG * m_Multiplier * bs.m_MagicalKiller / ENEMY_SPR;

    damage = std::min(MAX_DAMAGE, damage);
	
    return damage;
  };

private:
  float m_Multiplier;
};

// CutThrough 2.5 * 1.33

static const MagicalSingle Banish("Banish", 1.2);
static const MagicalSingle Bio("Bio", 1.2, Rule::StatusAilment);
static const MagicalSingle Blind("Blind", 0.0);
static const MagicalSingle Blizzard("Blizzard", 1.2);
static const MagicalSingle Deprotect("Deprotect", 0.0);
static const MagicalSingle Deshell("Deshell", 0.0);
static const MagicalSingle Drain("Drain", 0.8);
static const MagicalSingle Elementalash("Elementalash", 1.8);
static const MagicalSingle Fire("Fire", 1.2);
static const MagicalSingle Imperil("Imperil", 0.0);
static const MagicalSingle MagicShot("MagicShot", 1.2);
static const MagicalSingle Osmose("Osmose", 0.0);
static const MagicalSingle Silence("Silence", 0.0, Rule::StatusAilment);
static const MagicalSingle Sleep("Sleep", 0.0, Rule::StatusAilment);
static const MagicalSingle Stone("Stone", 1.2);
static const MagicalSingle Thunder("Thunder", 1.2);
static const MagicalSingle Water("Water", 1.2, Rule::Water);

#endif
