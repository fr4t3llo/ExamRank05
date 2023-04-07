#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(std::string const &_name, std::string const &_effects) : name(_name), effects(_effects)
{
    this->name = _name;
    this->effects = _effects;
}

ASpell::ASpell(ASpell const &obj)
{
    *this  = obj;
}

ASpell & ASpell::operator=(ASpell const &obj)
{
    this->name = obj.name;
    this->effects = obj.effects;
}

ASpell::~ASpell(){}


std::string const & ASpell::getName() const
{
    return this->name;
}
std::string const & ASpell::getEffects() const
{
    return this->effects;
}