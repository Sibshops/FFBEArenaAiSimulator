#include <iostream>

#include "Unit.hpp"
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



Unit Unit::CreateCecil(const Rules rules)
{
  Unit unit(rules);

  unit.m_Name = "Cecil";
  unit.HP = 3640 + 390;
  unit.MP = 143 + 65;
  unit.ATK = 126 + 26;
  unit.DEF = 141 + 34;
  unit.MAG = 110 + 26;
  unit.SPR = 114 + 26;

  unit.AddAbility(&Protect);
  
  return unit;
}

Unit Unit::CreateCerius(const Rules rules)
{
  Unit unit(rules);

  unit.m_Name = "Cerius";
  unit.HP = 3078 + 390;
  unit.MP = 186 + 85;
  unit.ATK = 102 + 26;
  unit.DEF = 128 + 26;
  unit.MAG = 127 + 26;
  unit.SPR = 136 + 26;

  unit.AddAbility(&HeartOfLight);
  unit.AddAbility(&Protect);
  unit.AddAbility(&Shell);
  unit.AddAbility(&Deprotect);
  unit.AddAbility(&Deshell);
  // unit.AddAbility(&Barfira);
  // unit.AddAbility(&Barblizzara);
  // unit.AddAbility(&Barthundara);
  // some more here
  
  
  return unit;
}

Unit Unit::CreateMedius(const Rules rules)
{
  Unit unit(rules);

  unit.m_Name = "Medius";
  unit.HP = 3385 + 390;
  unit.MP = 148 + 65;
  unit.ATK = 146 + 34;
  unit.DEF = 116 + 26;
  unit.MAG = 118 + 26;
  unit.SPR = 116 + 26;

  
  unit.AddAbility(&Aim);
  unit.AddAbility(&PowerShot);
  unit.AddAbility(&MagicShot);
  unit.AddAbility(&AutoBowgun);
  unit.AddAbility(&BurstShot);
  unit.AddAbility(&Scattershot);
  unit.AddAbility(&Multiburst);
  unit.AddAbility(&Ambition);
  unit.AddAbility(&GunMaster);
  unit.AddAbility(&HyperFire);
  unit.AddAbility(&BlazingGlory);
  
  return unit;
}


Unit Unit::CreateLuneth(const Rules rules)
{
  Unit unit(rules);

  unit.m_Name = "Luneth";
  unit.HP = 3625 + 390;
  unit.MP = 155 + 65;
  unit.ATK = 146 + 34;
  unit.DEF = 127 + 26;
  unit.MAG = 115 + 26;
  unit.SPR = 117 + 26;
  
  unit.AddAbility(&HitAll);
  unit.AddAbility(&SwordMaster);
  unit.AddAbility(&CutThrough);
  unit.AddAbility(&Atk30);
  unit.AddAbility(&Advance);
  unit.AddAbility(&DualWield);
  
  return unit;
}

Unit Unit::CreateCloudOfDarkness(const Rules rules)
{
  Unit unit(rules);

  unit.m_Name = "Cloud Of Darkness";
  unit.HP = 3346 + 390;
  unit.MP = 146 + 65;
  unit.ATK = 149 + 34;
  unit.DEF = 132 + 26;
  unit.MAG = 115 + 26;
  unit.SPR = 100 + 26;
  
  unit.AddAbility(&ArmorBreak);
  unit.AddAbility(&Atk20);
  unit.AddAbility(&ManEater);
  unit.AddAbility(&Barrage);
  unit.AddAbility(&ManEaterPlus);
  unit.AddAbility(&AuraBall);
  unit.AddAbility(&OmniVeil);
  unit.AddAbility(&Comeback);
  unit.AddAbility(&Atk30);
  unit.AddAbility(&CallOfTheVoid);

  unit.AddAbility(&Blind);
  unit.AddAbility(&Protect);
  unit.AddAbility(&Thundara);
  unit.AddAbility(&Protectga);
  unit.AddAbility(&Thundaga);
  
  return unit;
}

Unit Unit::CreateExdeath(const Rules rules)
{
  Unit unit(rules);

  unit.m_Name = "Exdeath";
  unit.HP = 3121 + 390;
  unit.MP = 188 + 85;
  unit.ATK = 117 + 26;
  unit.DEF = 109 + 26;
  unit.MAG = 145 + 26;
  unit.SPR = 123 + 26;
  

  unit.AddAbility(&Mag30);
  unit.AddAbility(&Transcender);
  unit.AddAbility(&EarthShaker);
  unit.AddAbility(&WickedLight);

  unit.AddAbility(&Osmose);
  unit.AddAbility(&Firaga);
  unit.AddAbility(&Blizzaga);
  unit.AddAbility(&Thundaga);
  unit.AddAbility(&Imperil);
  unit.AddAbility(&Faith);
  unit.AddAbility(&Meteor);
  unit.AddAbility(&ArenaBonus);
  
  return unit;
}


Unit Unit::CreateBartz(const Rules rules)
{
  Unit unit(rules);

  unit.m_Name = "Bartz";
  unit.HP = 3445 + 510;
  unit.MP = 149 + 65;
  unit.ATK = 123 + 26;
  unit.DEF = 124 + 26;
  unit.MAG = 122 + 26;
  unit.SPR = 118 + 26;
  

  unit.AddAbility(&Store);
  unit.AddAbility(&Barrage);
  unit.AddAbility(&ThreateningOath);
  unit.AddAbility(&BocoPendant);
  unit.AddAbility(&Atk20);
  unit.AddAbility(&SeakerBlade);
  unit.AddAbility(&GaleBarrage);
  unit.AddAbility(&WindShear);
  unit.AddAbility(&Imperil);
  unit.AddAbility(&ArenaBonus);

  return unit;
}

Unit Unit::CreateSeven(const Rules rules)
{
  Unit unit(rules);

  unit.m_Name = "Seven";
  unit.HP = 3610 + 450;
  unit.MP = 148 + 75;
  unit.ATK = 140 + 30;
  unit.DEF = 130 + 30;
  unit.MAG = 119 + 30;
  unit.SPR = 119 + 30;
  
  unit.AddAbility(&Drainlash);
  unit.AddAbility(&Atk10);
  unit.AddAbility(&Osmoselash);
  unit.AddAbility(&Focus);
  unit.AddAbility(&Frostlash);
  unit.AddAbility(&Flamelash);
  unit.AddAbility(&Thunderlash);
  unit.AddAbility(&DivingStrike);
  unit.AddAbility(&Elementalash);

  unit.AddAbility(&Fira);
  unit.AddAbility(&Blizzaga);

  
  return unit;
}

Unit Unit::CreateLing(const Rules rules)
{
  Unit unit(rules);

  unit.m_Name = "Ling";
  unit.HP = 2765 + 390;
  unit.MP = 187 + 85;
  unit.ATK = 124 + 26;
  unit.DEF = 96 + 26;
  unit.MAG = 104 + 26;
  unit.SPR = 115 + 26;
  
  unit.AddAbility(&FeintStep);
  unit.AddAbility(&DauntingStep);
  unit.AddAbility(&Mirage);
  // unit.AddAbility(&Chakra);
  // unit.AddAbility(&InvigoratingDance);
  unit.AddAbility(&TrainedAssassinCritical);
  unit.AddAbility(&TrainedAssassinEffect);
  // unit.AddAbility(&DanceOfLife);
  unit.AddAbility(&DanceOfDeath);

  return unit;
}


Unit Unit::CreateSnow(const Rules rules)
{
  Unit unit(rules);

  unit.m_Name = "Snow";
  unit.HP = 3801 + 510;
  unit.MP = 148 + 65;
  unit.ATK = 138 + 26;
  unit.DEF = 135 + 26;
  unit.MAG = 115 + 26;
  unit.SPR = 115 + 26;
  
  unit.AddAbility(&Aquastrike);
  unit.AddAbility(&AreaBlast);
  unit.AddAbility(&Froststrike);
  unit.AddAbility(&BattleRoar);

  unit.AddAbility(&Blizzard);
  unit.AddAbility(&Water);
  unit.AddAbility(&Blizzara);
  unit.AddAbility(&Watera);
  
  return unit;
}

Unit Unit::CreateRain(const Rules rules)
{
  Unit unit(rules);

  unit.m_Name = "Rain";
  unit.HP = 3234 + 450;
  unit.MP = 126 + 75;
  unit.ATK = 115 + 30;
  unit.DEF = 114 + 30;
  unit.MAG = 111 + 30;
  unit.SPR = 104 + 30;
  
  unit.AddAbility(&PowerBreak);
  unit.AddAbility(&Defend);
  unit.AddAbility(&LavaFloor);
  unit.AddAbility(&Undermine);
  unit.AddAbility(&Leadership);

  unit.AddAbility(&Fire);
  unit.AddAbility(&Stone);
  unit.AddAbility(&Fira);
  unit.AddAbility(&Stonra);
  unit.AddAbility(&Firaga);
  unit.AddAbility(&Stonga);
  
  return unit;
}


Unit Unit::CreateDangerousAriana(const Rules rules)
{
  Unit unit(rules);

  unit.m_Name = "Dangerous Ariana";
  unit.HP = 2850 + 390;
  unit.MP = 185 + 65;
  unit.ATK = 101 + 26;
  unit.DEF = 99 + 26;
  unit.MAG = 151 + 34;
  unit.SPR = 140 + 26;
  
  unit.AddAbility(&MagicShot);
  unit.AddAbility(&Mesmerize);
  unit.AddAbility(&DanceTune);
  unit.AddAbility(&SlowBallad);
  unit.AddAbility(&PreChorus);

  unit.AddAbility(&Thundara);
  unit.AddAbility(&Biora);
  unit.AddAbility(&Osmose);
  unit.AddAbility(&Thundaga);
  unit.AddAbility(&Bioga);
  
  return unit;
}


Unit::Unit(const Rules rules)
  : m_Rules(rules)
{
}

NormalAttack normalAttack;

BattleStats Unit::CalculateBattleStats() const
{
  BattleStats bs;

  bs.BaseHP = bs.HP = HP;
  bs.BaseMP = bs.MP = MP;
  bs.BaseATK = bs.ATK = ATK;
  bs.BaseDEF = bs.DEF = DEF;
  bs.BaseMAG = bs.MAG = MAG;
  bs.BaseSPR = bs.SPR = SPR;
  
  for (auto ability : Abilities)
    {
      if (ability->IsStats())
	{
	  ability->ModifyStats(bs);
	}
    }

  m_Esper->ModifyStats(bs);
    
  return bs;
}


BattleResults Unit::CalculateBattleResults(const BattleStats bs)
{
  BattleResults battleResults;
  
  uint64_t totalDamage = 0;
  int count = 0;

  for (auto ability : Abilities)
    {
      if (ability->IsOffensive())
	{
	  battleResults.HasOffensiveAbility = true;
	  auto damage = ability->CalculateDamage(bs);
	  // std::cout << "Damage = " << damage << std::endl;
	  totalDamage += damage;
	  ++count;
	}
      else if (ability->IsSupport())
	{
	  battleResults.HasSupportAbility = true;
	}
    }

  if (count != 0)
    {
      battleResults.OffensiveAbilityDamage = totalDamage / count;
    }
  else
    {
      
    }
   

  battleResults.NormalAttackDamage = normalAttack.CalculateDamage(bs);
  
  return battleResults;
}

bool Unit::AddAbility(const Ability* ab)
{
  if (ab->IsBanned(m_Rules))
    {
      return false;
    }
  
  if (ab->IsStackable())
    {
      Abilities.push_back(ab);
      return true;
    }
  else
    {
      for (auto ability : Abilities)
	{
	  if (ab->m_Name == ability->m_Name)
	    {
	      return false;
	    }
	}

      Abilities.push_back(ab);
      return true;
    }
}

void Unit::AddEsper(Esper* esper)
{
  m_Esper = esper;

  for (auto ability : esper->Abilities)
    {
      AddAbility(ability);
    }
}
