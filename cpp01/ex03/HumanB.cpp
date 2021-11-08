#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << "\e[0;38;5;158m" << this->name << "\e[37;0m" 
    << " атакует его типом оружия "  
    << "\e[0;38;5;156m" << this->weap2->getType() << "\e[37;0m" << std::endl;
}

void HumanB::setWeapon(Weapon &weap)
{
    this->weap2 = &weap;
}