#include <iostream>
#include "Karen.hpp"

int main()
{	
	// указатель на определенную функцию в классе
	// void (Karen::*f)();

// *f — интерпретируются как предварительное объявление приоритета.
// void (Karen::*f)();
	std::string str;
	while (1)
	{

		std::cout << "\e[38;5;222m" << " -- Введите сообщение -- " << "\e[37;0m" << std::endl;
		std::cin >> str ;

		if (str == "CHAO" || str == "END" || str == "EXIT" || str == "ПОКА")
		{
			std::cout << "\e[38;5;250m" << "До скорых встреч! 👋 " << "\e[37;0m" << std::endl;
			return (0);
		}

		Karen(k_class);
		k_class.complain(str);
	}

// Метод присвоения функции указателю на объявленную функцию следующий.
	// void (Karen::*f)() = &Karen::debug;
	// void (Karen::*f)() = &Karen::info;
	// void (Karen::*f)() = &Karen::warning;
	// void (Karen::*f)() = &Karen::error;
	
	return (0);
}