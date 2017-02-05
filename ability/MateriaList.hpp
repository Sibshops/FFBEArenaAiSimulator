#include <vector>
#include "../stats/BattleStats.hpp"
#include "Ability.hpp"


#ifndef MATERIA_LIST_HPP
#define MATERIA_LIST_HPP


std::vector<const Ability*> GetMateria();

std::vector<const Ability*> GetNextMateria();

  
#endif
