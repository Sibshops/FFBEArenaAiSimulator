#include <memory>
#include <iostream>
#include <vector>
#include "unit/Unit.hpp"
#include "ability/MateriaList.hpp"
#include "ability/Sunbeam.hpp"
#include "rules/Rules.hpp"
#include "esper/Esper.hpp"


void CalculateUnit(Unit& unit,
		   const std::vector<const Ability*> Materia,
		   const std::vector<Esper> espers,
		   const Rules rules)
{
  for (int a = 0; a < Materia.size(); ++a)
    {
      for (int b = a + 1; b < Materia.size(); ++b)
	{
	  for (int c = b + 1; c < Materia.size(); ++c)
	    {
	      for (int d = c + 1; d < Materia.size(); ++d)
		{
		  for (auto esper : espers)
		    {
		      Unit currUnit = unit;
		      currUnit.AddEsper(&esper);
		      
		      bool added = currUnit.AddAbility(Materia[a])
			&& currUnit.AddAbility(Materia[b])
			&& currUnit.AddAbility(Materia[c])
			&& currUnit.AddAbility(Materia[d]);

		      if (added)
			{
			  BattleStats battleStats = currUnit.CalculateBattleStats();
			  BattleResults battleResults = currUnit.CalculateBattleResults(battleStats);
			  			  
			  std::cout
			    << battleResults.CalculateOffensiveAIDamage()
			    << " " << unit.m_Name << " "
			    << esper.m_Name << " "
			    << Materia[a]->m_Name << " "
			    << Materia[b]->m_Name << " "
			    << Materia[c]->m_Name << " "
			    << Materia[d]->m_Name << " "
			    << battleResults.StrongestAbilityDamage << " " << battleResults.StrongestAbility 
				    << std::endl;			  
			}
		    }
		}
	    }
	}
    }
  
}


int OffensiveDamage()
{
  Rules rules = {Rule::BlackMagic, Rule::Wind};
  //Rules rules;

  std::vector<Unit> units;
  // No
  units.push_back(Unit::CreateCecil(rules));
  units.push_back(Unit::CreateCerius(rules));
  units.push_back(Unit::CreateLing(rules));
  units.push_back(Unit::CreateSnow(rules));
  units.push_back(Unit::CreateRain(rules));
  units.push_back(Unit::CreateDangerousAriana(rules));
  units.push_back(Unit::CreateSeven(rules));  
  
  units.push_back(Unit::CreateCloudOfDarkness(rules));
  units.push_back(Unit::CreateLuneth(rules));
  units.push_back(Unit::CreateMedius(rules));
  units.push_back(Unit::CreateExdeath(rules));
  units.push_back(Unit::CreateBartz(rules));

  const std::vector<const Ability*> materia = GetMateria();

  const std::vector<Esper> espers = Esper::GetEspers();
    
  for (auto unit : units)
    {
      CalculateUnit(unit, materia, espers, rules);
    }
 
}


int main()
{

  // Calculate damage
  OffensiveDamage();
 

  
  
  return 0;
}
