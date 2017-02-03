#include <set>
#include <vector>
#include <string>
#include <memory>

#include "../stats/BattleStats.hpp"
#include "../stats/BattleResults.hpp"
#include "../ability/Ability.hpp"
#include "../esper/Esper.hpp"
#include "../rules/Rules.hpp"

#ifndef UNIT_HPP
#define UNIT_HPP

class Unit
{
public:

  static Unit CreateCecil(const Rules rules);
  static Unit CreateCerius(const Rules rules);
  static Unit CreateMedius(const Rules rules);
  static Unit CreateLuneth(const Rules rules);
  static Unit CreateCloudOfDarkness(const Rules rules);
  static Unit CreateExdeath(const Rules rules);
  static Unit CreateBartz(const Rules rules);
  static Unit CreateSeven(const Rules rules);
  static Unit CreateLing(const Rules rules);
  static Unit CreateSnow(const Rules rules);
  static Unit CreateRain(const Rules rules);
  static Unit CreateDangerousAriana(const Rules rules);
  // static Unit CreateXiao();


  Unit(const Rules rules);
  
  BattleStats CalculateBattleStats() const;

  // Calculate average offensive damage. Assume 1 DEF.
  BattleResults CalculateBattleResults(const BattleStats bs);
  
  bool AddAbility(const Ability* ab);
  void AddEsper(Esper* esper);
  
  int HP;
  int MP;
  int ATK;
  int DEF;
  int MAG;
  int SPR;

  std::string m_Name;
  
  std::vector<const Ability*> Abilities;

  Esper* m_Esper;
  const Rules m_Rules;
};

#endif
