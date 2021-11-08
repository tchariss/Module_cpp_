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

	int i = 0;
	for (; mas_level[i] != level && i < 4; i++);
    //while (mas_level[i] != level && i < 4)
	//	i++;

// Метод присвоения функции указателю на объявленную функцию следующий.
    // void (Karen::*f)() = &Karen::debug;
	// void (Karen::*f)() = &Karen::info;
	// void (Karen::*f)() = &Karen::warning;
	// void (Karen::*f)() = &Karen::error;

	void (Karen::*point_f)(); // указатель на определенную функцию в классе

	switch (i)
	{
		case 0:
		{
			std::cout << "function_debug ::" << std::endl;
			point_f = &Karen::debug;
			break ;
		}
		case 1:
		{
			std::cout << "function_info ::" << std::endl;
			point_f = &Karen::info;
			break;
		}
		case 2:
		{
			std::cout << "function_warning ::" << std::endl;
			point_f = &Karen::warning;
			break;
		}
		case 3:
		{
			std::cout << "function_error ::" << std::endl;
			point_f = &Karen::error;
			break;
		}
		default:
		{
			std::cout << "unknown : " << level << std::endl;
			std::cout << "\e[38;5;161m" << "Не знаю такого сообщения" << "\e[37;0m" << std::endl;
			return ;
		}
	}
	(this->*point_f)(); // после выхода из цикла
	
}

