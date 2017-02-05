#include <string>
#include "../stats/BattleStats.hpp"
#include "../rules/Rules.hpp"

#ifndef ABILITY_HPP
#define ABILITY_HPP

class Ability
{
public:

  Ability(std::string name)
    : m_Name(name)
  {
  }

  Ability(std::string name, Rule rule)
    : m_Name(name)
  {
    m_Rules.insert(rule);
  }

  Ability(std::string name, RuleVector rules)
    : m_Name(name)
  {
    for (auto rule : rules)
      m_Rules.insert(rule);
  }


  virtual bool IsBanned(const Rules rules) const; 
  virtual bool IsOffensive() const { return false; };
  virtual bool IsSupport() const { return false; };
  virtual bool IsStats() const { return false; };

  virtual bool IsStackable() const { return false; };
  
  virtual std::string ToString() const { return "Ability"; }
  
  // Calculate average offensive damage. Assume 1 DEF.
  virtual int CalculateDamage(const BattleStats bs) const { return 0;};
  virtual void ModifyStats(BattleStats& bs) const { };
  
  std::string m_Name;

  Rules m_Rules;
};

#endif
