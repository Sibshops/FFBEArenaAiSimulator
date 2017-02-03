cmake_minimum_required (VERSION 2.6)
set (CMAKE_CXX_STANDARD 11)
project (FFBE_AI)
add_executable(ffbeAI
  main.cpp
  unit/Unit.cpp
  esper/Esper.cpp
  ability/MateriaList.cpp
  ability/Ability.cpp
  stats/BattleResults.cpp)
