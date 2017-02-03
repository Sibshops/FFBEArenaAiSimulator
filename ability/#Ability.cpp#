#include "Ability.hpp"
#include <algorithm>

bool Ability::IsBanned(const Rules rules) const
{
  for (auto rule : rules)
    {
      if (m_Rules.count(rule))
	{
	  return true;
	}
    }

  return false;
}
