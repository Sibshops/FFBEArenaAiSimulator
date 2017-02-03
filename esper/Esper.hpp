#include <set>
#include <vector>
#include <string>
#include <memory>

#include "../stats/BattleStats.hpp"
#include "../stats/BattleResults.hpp"
#include "../ability/Ability.hpp"

#ifndef ESPER_HPP
#define ESPER_HPP

class Esper
{
public:

  static Esper CreateEmpty();
  static Esper CreateSiren();
  static Esper CreateIfrit();
  static Esper CreateGolem();
  static Esper CreateRamuh();
  static Esper CreateDiablos();
  static Esper CreateShiva();
  static Esper CreateCarbuncle();

  static std::vector<Esper> GetEspers();
  
  //   BattleStats CalculateBattleStats() const;

  void ModifyStats(BattleStats& bs) const;

  // bool AddAbility(const Ability* ab);

  int HP = 0;
  int MP = 0;
  int ATK = 0;
  int DEF = 0;
  int MAG = 0;
  int SPR = 0;

  std::string m_Name;
  
  std::vector<const Ability*> Abilities;

  
};

#endif
