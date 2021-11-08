#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
// Полиморфизм подтипов, абстрактные классы, интерфейсы

int main()
{
	int count = 0;
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << "------------------" << std::endl;

	delete i; // не должен создавать утечку
	delete j;

	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	
 	// Конструктор копирования и операторр присвоения
	Cat a1;
	Cat tmp1 = a1;

	Dog a2;
	Dog tmp2 = a2;

	std::cout << std::endl;
	std::cout << "------My_test------" << std::endl;

	Animal *arr[4];

	std::cout << "\e[0;48;5;69m" << "	Новые собаки" << END << std::endl;
	while(count < 2)
	{
		std::cout << "new Dog = " << count << std::endl;
		arr[count] = new Dog();
		arr[count]->makeSound();
		count++;
	}
	std::cout << "\e[0;48;5;126m" << "	Новые котята" << END << std::endl;
	while(count < 4)
	{
		std::cout << "new Cat = " << count << std::endl;
		arr[count] = new Cat();
		arr[count]->makeSound();
		count++;
	}

	std::cout << std::endl;
	std::cout << "------------Delete arr------------" << std::endl;

	count = 0;

	while (count < 4)
	{
		delete arr[count];
		count++;
	}

	std::cout << "---------End----------" << std::endl;

	return (0);
}
