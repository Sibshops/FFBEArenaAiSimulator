#include "../stats/BattleStats.hpp"
#include "Ability.hpp"

#ifndef NORMAL_ATTACK_HPP
#define NORMAL_ATTACK_HPP

class NormalAttack : public Ability
{
public:

  NormalAttack()
    : Ability("NormalAttack") {}
  
  int CalculateDamage(const BattleStats bs) const override {
    int damage = bs.ATK * bs.ATK * bs.m_PhysicalKiller;

    // Critical rate chance of doing 1.5 more damage
    damage += damage * bs.m_CriticalRate * 1.5;

    damage /= ENEMY_DEF;

    damage = std::min(MAX_DAMAGE, damage);
    
    if (bs.m_BattleFlags.count(BattleFlags::DualWield))
      {
	damage *= 2.0;
      }

    if (bs.m_BattleFlags.count(BattleFlags::TwoHitCombo))
      {
	damage *= 2.0;
      }
    
    return damage;
  };
};

#endif
