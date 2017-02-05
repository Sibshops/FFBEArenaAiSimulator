#include "MateriaList.hpp"
#include "AtkMag.hpp"
#include "Sunbeam.hpp"
#include "BattleFlagAbility.hpp"
#include "KillerEffect.hpp"
#include "HybridAll.hpp"
#include "PhysicalAll.hpp"
#include "PhysicalSingle.hpp"
#include "MagicalAll.hpp"
#include "DrainBlade.hpp"
#include "OsmoseBlade.hpp"

std::vector<const Ability*> GetMateria()
{
  std::vector<const Ability*> mat;
  mat.push_back(&Atk10);
  mat.push_back(&Atk10);
  mat.push_back(&Atk10);
  mat.push_back(&Atk10);
  
  mat.push_back(&Mag10);
  mat.push_back(&Mag10);
  mat.push_back(&Mag10);
  mat.push_back(&Mag10);
  mat.push_back(&SunbeamMateria);
  mat.push_back(&DrainBladeMateria);
  mat.push_back(&OsmoseBladeMateria);
  mat.push_back(&Barrage);  
  mat.push_back(&BioBlaster);
  // mat.push_back(&Aerora);
  // mat.push_back(&Stonra);


  // TM
  //mat.push_back(&Mag30);
  //mat.push_back(&Mag30);
  mat.push_back(&DualWield);
  
  return mat;
}

std::vector<const Ability*> GetNextMateria()
{
  std::vector<const Ability*> mat;
  mat.push_back(&Atk20Mag20);
  mat.push_back(&Mag30);
  mat.push_back(&Barrage);
  mat.push_back(&Bladeblitz);
  mat.push_back(&ManEaterMateria);
    // mat.push_back(&TwoHitCombo);
  return mat;
}

 
