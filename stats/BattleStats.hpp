#include <set>
#include "BattleFlags.hpp"

#ifndef BATTLE_STATS_HPP
#define BATTLE_STATS_HPP

const int NUMBER_OF_ENEMY_UNITS = 5;
const int MAX_DAMAGE = 999;
const int ENEMY_DEF = 250;
const int ENEMY_SPR = 250;

class BattleStats
{
public:
 
  int BaseHP;
  int BaseMP;
  int BaseATK;
  int BaseDEF;
  int BaseMAG;
  int BaseSPR;
  
  int HP;
  int MP;
  int ATK;
  int DEF;
  int MAG;
  int SPR;

  float m_PhysicalKiller = 1.0;
  float m_MagicalKiller = 1.0;
  float m_CriticalRate = 0.1;
  
  std::set<BattleFlags> m_BattleFlags;
};



#endif
