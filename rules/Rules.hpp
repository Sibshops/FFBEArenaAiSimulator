#include <set>
#include <vector>

#ifndef RULES_HPP
#define RULES_HPP


enum class Rule
{
  BlackMagic,
    StatusAilment,
    Wind,
    Water
};

typedef std::set<Rule> Rules;
typedef std::vector<Rule> RuleVector;


#endif
