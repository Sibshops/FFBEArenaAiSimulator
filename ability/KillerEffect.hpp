#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef KILLER_EFFECT_HPP
#define KILLER_EFFECT_HPP

class KillerEffect : public Ability
{
public:

  KillerEffect(std::string name, const float physical, const float magical)
    :  Ability(name),
       m_Physical(physical),
       m_Magical(m_Magical)
  {
  }
  
  bool IsStats() const override { return true;} ;

  void ModifyStats(BattleStats& bs) const override
  {
    bs.m_PhysicalKiller += m_Physical;
    bs.m_MagicalKiller += m_Magical;
  };

private:
  float m_Physical;
  float m_Magical;
  
};

static const KillerEffect ManEater("ManEater", 0.5, 0.0);
static const KillerEffect ManEaterEsper("ManEaterEsper", 0.5, 0.0);
static const KillerEffect ManEaterPlus("ManEaterPlus", 0.75, 0.75);
static const KillerEffect ManEaterMateria("ManEaterMateria", 0.5, 0.0);
static const KillerEffect Transcender("Transcender", 0.0, 0.3);
static const KillerEffect TrainedAssassinEffect("Trained Assassin Effect", 0.75, 0.75);

#endif
