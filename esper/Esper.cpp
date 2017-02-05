#include <iostream>

#include "Esper.hpp"
#include "../ability/NormalAttack.hpp"
#include "../ability/PhysicalAll.hpp"
#include "../ability/AtkMag.hpp"
#include "../ability/PhysicalSingle.hpp"
#include "../ability/GenericSupport.hpp"
#include "../ability/BattleFlagAbility.hpp"
#include "../ability/CriticalRate.hpp"
#include "../ability/KillerEffect.hpp"
#include "../ability/MagicalSingle.hpp"
#include "../ability/MagicalAll.hpp"
#include "../ability/HybridSingle.hpp"




std::vector<Esper> Esper::GetEspers()
{
  std::vector<Esper> espers;
  //   espers.push_back(Esper::CreateEmpty());
  espers.push_back(Esper::CreateSiren());
  espers.push_back(Esper::CreateIfrit());
  espers.push_back(Esper::CreateGolem());
  espers.push_back(Esper::CreateRamuh());
  espers.push_back(Esper::CreateDiablos());
  espers.push_back(Esper::CreateShiva());
  espers.push_back(Esper::CreateCarbuncle());

  return espers;
}


Esper Esper::CreateEmpty()
{
  Esper esper;

  esper.m_Name = "Empty";

  return esper;
}

Esper Esper::CreateSiren()
{
  Esper esper;

  esper.m_Name = "Siren";
  esper.HP = 3275;
  esper.MP = 3445;
  esper.ATK = 1835;
  esper.DEF = 1980;
  esper.MAG = 3655;
  esper.SPR = 3655;

  esper.Abilities.push_back(&SongOfAttack);
  esper.Abilities.push_back(&AlluringAir);
  esper.Abilities.push_back(&Deshell);
  esper.Abilities.push_back(&Lullaby);
  esper.Abilities.push_back(&Blind);
  esper.Abilities.push_back(&Water);
  esper.Abilities.push_back(&Silence);
  // Dispel
  // Cure
  // Cleanse    
  
  return esper;
}

Esper Esper::CreateIfrit()
{
  Esper esper;

  esper.m_Name = "Ifrit";
  esper.HP = 4640;
  esper.MP = 2232;
  esper.ATK = 5248;
  esper.DEF = 2770;
  esper.MAG = 2101;
  esper.SPR = 2076;

  esper.Abilities.push_back(&RagingFist);
  esper.Abilities.push_back(&Fire);
  esper.Abilities.push_back(&Barfire);
  esper.Abilities.push_back(&PowerBreak);
  esper.Abilities.push_back(&Fira);
  esper.Abilities.push_back(&Faith);
  
  return esper;
}

Esper Esper::CreateGolem()
{
  Esper esper;

  esper.m_Name = "Golem";
  esper.HP = 6220;
  esper.MP = 4216;
  esper.ATK = 3240;
  esper.DEF = 4740;
  esper.MAG = 1591;
  esper.SPR = 1591;

  esper.Abilities.push_back(&Brace);
	    
  return esper;
}

Esper Esper::CreateRamuh()
{
  Esper esper;

  esper.m_Name = "Ramuh";
  esper.HP = 2968;
  esper.MP = 6235;
  esper.ATK = 1621;
  esper.DEF = 1186;
  esper.MAG = 5935;
  esper.SPR = 4540;

  esper.Abilities.push_back(&Imperil);
  esper.Abilities.push_back(&Protect);
  esper.Abilities.push_back(&Blind);
  esper.Abilities.push_back(&Faith);
  esper.Abilities.push_back(&Banish);
  esper.Abilities.push_back(&Thunder);
  esper.Abilities.push_back(&Deprotect);
  esper.Abilities.push_back(&Thundara);
  esper.Abilities.push_back(&Drain);
  esper.Abilities.push_back(&Bio);
  esper.Abilities.push_back(&Osmose);
	    
  return esper;
}

Esper Esper::CreateDiablos()
{
  Esper esper;

  esper.m_Name = "Diablos";
  esper.HP = 4560;
  esper.MP = 5860;
  esper.ATK = 1565;
  esper.DEF = 2285;
  esper.MAG = 5190;
  esper.SPR = 3090;

  esper.Abilities.push_back(&Imperil);
  esper.Abilities.push_back(&Darkside);
  esper.Abilities.push_back(&ManEaterEsper);
  esper.Abilities.push_back(&Deshell);
  esper.Abilities.push_back(&Silence);
  esper.Abilities.push_back(&Drain);
  esper.Abilities.push_back(&Sleep);
  esper.Abilities.push_back(&Biora);
  esper.Abilities.push_back(&Deprotect);
  
  
  return esper;
}

Esper Esper::CreateShiva()
{
  Esper esper;

  esper.m_Name = "Shiva";
  esper.HP = 3240;
  esper.MP = 5780;
  esper.ATK = 2064;
  esper.DEF = 2292;
  esper.MAG = 5220;
  esper.SPR = 5340;

  esper.Abilities.push_back(&Imperil);
  esper.Abilities.push_back(&Sleep);
  esper.Abilities.push_back(&Protect);
  esper.Abilities.push_back(&Shell);
  esper.Abilities.push_back(&Blizzard);
  esper.Abilities.push_back(&Deshell);
  esper.Abilities.push_back(&Deprotect);
  esper.Abilities.push_back(&MagicBreak);
  esper.Abilities.push_back(&Faith);
  esper.Abilities.push_back(&Blizzara);
  esper.Abilities.push_back(&Barblizzard);
    
  return esper;
}

Esper Esper::CreateCarbuncle()
{
  Esper esper;

  esper.m_Name = "Carbuncle";
  esper.HP = 3240;
  esper.MP = 5780;
  esper.ATK = 2064;
  esper.DEF = 2292;
  esper.MAG = 5220;
  esper.SPR = 5340;

  esper.Abilities.push_back(&Barblizzara);
  esper.Abilities.push_back(&Barblizzard);
  esper.Abilities.push_back(&Barfire);
  esper.Abilities.push_back(&Barfira);
  esper.Abilities.push_back(&Barthundara);
  esper.Abilities.push_back(&Barthunder);
  esper.Abilities.push_back(&Shell);
    
  return esper;
}


void Esper::ModifyStats(BattleStats& bs) const
{
  bs.HP += HP/100;
  bs.MP += MP/100;
  bs.ATK += ATK/100;
  bs.DEF += DEF/100;
  bs.MAG += MAG/100;
  bs.SPR += SPR/100;
}
