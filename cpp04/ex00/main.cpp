#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
// Полиморфизм подтипов, абстрактные классы, интерфейсы

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "------------------" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "------------------" << std::endl;

	j->makeSound();
	i->makeSound(); //will output the cat sound!
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "--------Wrong Animal----------" << std::endl;	

	const WrongAnimal* wr = new WrongAnimal();
	const WrongAnimal* wr_1 = new WrongCat();

	std::cout << wr_1->getType() << " " << std::endl;

	wr->makeSound();
	wr_1->makeSound();

	std::cout << "------------------" << std::endl;

	delete(wr_1);
	delete(wr);

	std::cout << std::endl;

	delete(i);
	delete(j);
	delete(meta);

}