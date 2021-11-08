#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    private:
        std::string name; // имя 
        Weapon *weap;// оружие
        // функция атаки;
    public:
        
        HumanA(std::string name, Weapon &weap);
        // {
        // };

        void attack();
        // {
        // std::cout << this->name << "атакует его типом оружия " << this->weap << std::endl;
        // }
        ~HumanA();
};


#endif