#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon(std::string str);

        std::string &getType(); // Получить

        void  setType(std::string new_type); // Установить

        ~Weapon();
};

# endif