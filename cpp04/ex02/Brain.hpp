
#ifndef BRAIN_HPP
# define BRAIN_HPP

# define END "\e[37;0m"

#include <iostream>
using std::cout;
using std::endl;


class Brain
{
	protected:
		std::string idea[100];

	public:
		Brain();
		~Brain();

		Brain& operator=(Brain const &arg); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр
        Brain(Brain const &arg);
		void array_print_idea();
};

#endif
 