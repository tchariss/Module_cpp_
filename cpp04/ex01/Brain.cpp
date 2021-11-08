#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

Brain::Brain() // инициализация своего мозга
{
	idea[0] = "Я помню чудное мгновенье";
	idea[1] = "Передо мной явилась ты,";
	idea[2] = "Как мимолетное виденье,";
	idea[3] = "Как гений чистой красоты.";
	cout << "\e[0;38;5;98m" << " Brain конструктор" << END << endl;
}

Brain::~Brain()
{
	cout << "\e[0;38;5;93m" << " Brain деструктор" << END << endl;
}

Brain&  Brain::operator=(Brain const &arg)
{
	// type = arg.type;
	int i = 0;

	if(this != &arg) // 2 одинаковых объекта
	{
		while(i < 100)
		{
			idea[i] = arg.idea[i];
			i++;
		}
	}

	return (*this); // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

Brain::Brain(Brain const &arg)
{
	int i = 0;
	
	if (arg.idea == idea)
		return ;
	while(i < 100)
	{
		idea[i] = arg.idea[i];
		i++;
	}
}

void Brain::array_print_idea()
{
	cout << idea[0] << endl;
	cout << idea[1] << endl;
	cout << idea[2] << endl;
	cout << idea[3] << endl;
}
