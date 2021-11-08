#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() 
{
	type = "Cat";
	brain_cat = new Brain();
	cout << "\e[0;38;5;218m" << " + Cat конструктор" << END << endl;
}

Cat::~Cat()
{
	delete brain_cat;
	cout << "\e[0;38;5;218m" << " 🔻 Cat деструктор" << END << endl;
}

Cat::Cat(std::string arg) : Animal(arg)
{
	cout << " Cat type = " << "\e[0;38;5;218m" 
	<< type << END << endl;
}

Cat::Cat(Cat const &orig_cat)
{
	*this = orig_cat;
	brain_cat = new Brain(orig_cat.getBrainCat());

	cout << " Cat конструктор копирования" << type << endl;
}

Cat& Cat::operator=(Cat const &orig_cat)
{
	// type = orig_cat.type;
	if (this != &orig_cat)
	{
		this->type = orig_cat.type;
		brain_cat = new Brain(orig_cat.getBrainCat());
		brain_cat->array_print_idea();
	}
	
	cout << " Cat оператор '=' клонирует : "
	<< "\e[0;38;5;228m" << "|" << type << "|" << END << endl;

	return (*this); // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

void Cat::makeSound() const
{
	cout << "(makeSound)Type : " << "\e[0;38;5;212m" << type << END << " говорит :";
	cout << "\e[0;38;5;212m" << " Мяу-мяу" << END << endl;
}

Brain &Cat::getBrainCat() const
{
	return(*brain_cat);
}