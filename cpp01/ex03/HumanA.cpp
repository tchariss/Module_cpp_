#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weap)
{
    this->weap = &weap;
    this->name = name;
}

void HumanA::attack()
{
    std::cout << "\e[0;38;5;153m" << this->name << "\e[37;0m" 
    << " атакует его типом оружия "
    << "\e[0;38;5;104m" << this->weap->getType() << "\e[37;0m"  << std::endl;
}

HumanA::~HumanA()
{
}
