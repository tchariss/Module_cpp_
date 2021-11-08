#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
// #include <iostream>

class HumanB
{
    private:
        std::string name; // имя 
        Weapon *weap2;// оружие
        // функция атаки;
    public:
        HumanB(std::string);
        // {
        // };
        ~HumanB();
        // {
        // };
        void attack();
        // {
        // std::cout << this->name << "атакует его типом оружия " << this->weap2 << std::endl;
        // }
        void setWeapon(Weapon &weap);
        // {
        //     this->weap2 = weap;
        // }
};

#endif