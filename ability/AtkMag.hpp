#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef ATKMAG_HPP
#define ATKMAG_HPP

class AtkMag : public Ability
{
public:

  AtkMag(std::string name, const float atkMul, const float magMul)
    : Ability(name),
      m_AtkMul(atkMul),
      m_MagMul(magMul)
  {
  }
  
  bool IsStats() const override { return true;} ;
  bool IsStackable() const override { return true;} ;

  void ModifyStats(BattleStats& bs) const override
  {
    bs.ATK += bs.BaseATK * m_AtkMul;
    bs.MAG += bs.BaseMAG * m_MagMul;
  };

private:
  float m_AtkMul;
  float m_MagMul;
  
};

static const AtkMag GunMaster("GunMaster", 0.2, 0.0);
static const AtkMag SwordMaster("SwordMaster", 0.2, 0.0);
static const AtkMag Atk10("Atk10", 0.1, 0.0);
static const AtkMag Atk20("Atk20", 0.2, 0.0);
static const AtkMag Atk30("Atk30", 0.3, 0.0);
static const AtkMag Mag10("Mag10", 0.0, 0.1);
static const AtkMag Mag20("Mag20", 0.0, 0.2);
static const AtkMag Mag30("Mag30", 0.0, 0.3);

static const AtkMag AtkMag10("AtkMag10", 0.1, 0.1);
static const AtkMag Atk20Mag20("Atk20Mag20", 0.2, 0.2);
static const AtkMag ThreateningOath("Threatening Oath", 0.2, 0.2);
static const AtkMag BocoPendant("Boco Pendant", 0.1, 0.1);
static const AtkMag ArenaBonus("Arena Bonus", 0.3, 0.3);

#endif
