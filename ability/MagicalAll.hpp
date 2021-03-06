#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef MAGICAL_ALL_HPP
#define MAGICAL_ALL_HPP

class MagicalAll : public Ability
{
public:

  MagicalAll(std::string name, float multiplier)
    : Ability(name),
      m_Multiplier(multiplier)
  {}

  MagicalAll(std::string name, float multiplier, Rule rule)
    : Ability(name, rule),
      m_Multiplier(multiplier)
  {}

  MagicalAll(std::string name, float multiplier, RuleVector rules)
    : Ability(name, rules),
      m_Multiplier(multiplier)
  {}

  bool IsOffensive() const override { return true; };

  // Calculate average offensive damage. Assume 1 DEF.
  int CalculateDamage(const BattleStats bs) const override
  {
    int damage = bs.MAG * bs.MAG * m_Multiplier * NUMBER_OF_ENEMY_UNITS * bs.m_MagicalKiller / ENEMY_SPR;

    damage = std::min(MAX_DAMAGE * NUMBER_OF_ENEMY_UNITS, damage);
    return damage;
  };

private:
  float m_Multiplier;
};



static const MagicalAll Alterna("Alterna", 5.1/(1.0-0.25), {Rule::BlackMagic});
static const MagicalAll Aerora("Aerora", 1.4, {Rule::BlackMagic, Rule::Wind});
static const MagicalAll Aeroga("Aeroga", 1.4, {Rule::BlackMagic, Rule::Wind});
static const MagicalAll AlluringAir("Alluring Air", 0.0, Rule::StatusAilment);
static const MagicalAll BioBlaster("Bio Blaster", 1.3, Rule::StatusAilment);
static const MagicalAll Biora("Biora", 1.25, {Rule::BlackMagic, Rule::StatusAilment});
static const MagicalAll Bioga("Bioga", 1.4, {Rule::BlackMagic, Rule::StatusAilment});
static const MagicalAll Blizzaga("Blizzaga", 1.8, {Rule::BlackMagic});
static const MagicalAll Blizzara("Blizzara", 1.4, {Rule::BlackMagic});
static const MagicalAll Mesmerize("Mesmerize", 0.0, Rule::StatusAilment);
static const MagicalAll DanceOfDeath("Dance of Death", 0.0, Rule::StatusAilment);
static const MagicalAll DauntingStep("DauntingStep", 0.0);
static const MagicalAll EarthShaker("EarthShaker", 1.8);
static const MagicalAll FeintStep("FeintStep", 0.0);
static const MagicalAll Fira("Fira", 1.4, {Rule::BlackMagic});
static const MagicalAll Firaga("Firaga", 1.8, {Rule::BlackMagic});
static const MagicalAll Lullaby("Lullaby", 0.0, Rule::StatusAilment);
static const MagicalAll Meteor("Meteor", 2.5/(1.0-0.25), {Rule::BlackMagic});
static const MagicalAll Stonga("Stonga", 1.8, {Rule::BlackMagic});
static const MagicalAll Stonra("Stonra", 1.4, {Rule::BlackMagic});
static const MagicalAll Thundaga("Thundaga", 1.8, {Rule::BlackMagic});
static const MagicalAll Thundara("Thundara", 1.4, {Rule::BlackMagic});
static const MagicalAll Watera("Watera", 1.4, {Rule::BlackMagic, Rule::Water});
static const MagicalAll Waterga("Waterga", 1.8, {Rule::BlackMagic, Rule::Water});
static const MagicalAll WickedLight("WickedLight", 2.8/(1.0-0.25));
static const MagicalAll Ultima("Ultima", 2.8/(1.0-0.25), {Rule::BlackMagic});

#endif
