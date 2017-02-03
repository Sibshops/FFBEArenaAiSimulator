#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef CRITICAL_RATE_HPP
#define CRITICAL_RATE_HPP

class CriticalRate : public Ability
{
public:

  CriticalRate(std::string name, const float multiplier)
    : Ability(name),
      m_Multiplier(multiplier)
  {
  }
  
  bool IsStats() const override { return true;} ;

  void ModifyStats(BattleStats& bs) const override
  {
    bs.m_CriticalRate += m_Multiplier;
  };

private:
  float m_Multiplier;
  
};

static const CriticalRate Ambition("Ambition", 0.4);
static const CriticalRate TrainedAssassinCritical("Trained Assassin Critical", 0.4);

#endif
