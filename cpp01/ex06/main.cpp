#include <iostream>
#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen(k_class);
	switch (ac)
	{
		case 2:
		{
			k_class.complain(av[1]);
			break ;
		}
		default: 
			std::cout << "\e[38;5;168m" << "[ Probably complaining about insignificant problems ]" << "\e[37;0m" << std::endl;
	}
	return (0);
}