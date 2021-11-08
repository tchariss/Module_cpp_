#include "Dog.hpp"
// #include "Brain.hpp"

Dog::Dog()
{
	type = "Dog";
	brain_dog = new Brain();
	// brain_dog->array_print_idea();
	cout << "\e[0;38;5;195m" << " + Dog конструктор" << END << endl;
}

Dog::~Dog() 
{
	delete brain_dog;
	cout << "\e[0;38;5;195m" << " 🔻 Dog деструктор" << END << endl;
}

// Dog::Dog(std::string arg) : Animal(arg)
// {
// 	cout << " Dog type = " << "\e[0;38;5;216m" 
// 	<< type << END << endl;
// }

Dog::Dog(Dog const &orig_dog)
{
	*this = orig_dog;
	brain_dog = new Brain(orig_dog.getBrainDog());

	cout << " Dog конструктор копирования" << type << endl;
}

Dog& Dog::operator=(Dog const &orig_dog)
{
	// type = orig_dog.type;
	if (this != &orig_dog)
	{
		this->type = orig_dog.type;
		brain_dog = new Brain(orig_dog.getBrainDog());
		brain_dog->array_print_idea();
	}

	cout << " Dog оператор '=' клонирует : "
	<< "\e[0;38;5;227m" << "|" << type << "|" << END << endl;

	return (*this); // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

void Dog::makeSound() const
{
	cout << "(makeSound)Type : " << "\e[0;38;5;159m" << type << END << " говорит :";
	cout << "\e[0;38;5;159m" << " Гав-гав" END << endl;
}

Brain &Dog::getBrainDog() const
{
	return(*brain_dog);
}