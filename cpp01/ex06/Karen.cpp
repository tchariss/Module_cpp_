#include "Karen.hpp"
#include <iostream>

Karen::Karen()
{

}

Karen::~Karen()
{

}

void Karen::debug(void)
{
    std::cout << "\e[38;5;105m" << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << "\e[37;0m"  << std::endl;
}

void Karen::info(void)
{
    std::cout << "\e[38;5;156m" << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << "\e[37;0m" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "\e[38;5;133m" << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << "\e[37;0m" << std::endl;
}

void Karen::error(void)
{
    std::cout << "\e[38;5;184m" << "This is unacceptable, I want to speak to the manager now." << "\e[37;0m" << std::endl;
}

void Karen::complain(std::string level)
{
    std::string mas_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i;
	i = 0;

    while (mas_level[i] != level && i < 4)
		i++;

	void (Karen::*point_f)(); // указатель на определенную функцию в классе

	switch (i)
	{
		case 0:
		{
			std::cout << "[ DEBUG ]" << std::endl;
			point_f = &Karen::debug;
			(this->*point_f)();
		}
		case 1:
		{
			std::cout << "[ INFO ]" << std::endl;
			point_f = &Karen::info;
			(this->*point_f)();
		}
		case 2:
		{
			std::cout << "[ WARNING ]" << std::endl;
			point_f = &Karen::warning;
			(this->*point_f)();
		}
		case 3:
		{
			std::cout << "[ ERROR ]" << std::endl;
			point_f = &Karen::error;
			(this->*point_f)();
			break;
		}
		default:
		{
            std::cout << "\e[38;5;168m" << "[ Probably complaining about insignificant problems ]" << "\e[37;0m" << std::endl;
			return ;
		}
	}
}

