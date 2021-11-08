#include "Character.hpp"

Character::Character()
{
	// cout << "\e[0;38;5;223m" << " + Character конструктор" << END << endl;
}

Character::~Character()
{
	// cout << "\e[0;38;5;223m" << " 🔻 Character деструктор" << END << endl;

	int i = 0;
	while(i < 4)
	{
		if (arr[i])
			delete arr[i];
		i++;
	}
}

Character::Character(std::string arg)
{
	name = arg;

	int i = 0;
	while(i < 4)
	{
		arr[i] = NULL;
		i++;
	}
}

Character::Character(Character const &arg)
{
	*this = arg;

	// cout << " Character конструктор копирования" << name << endl;
}

Character&  Character::operator=(Character const &arg)
{

	int i = 0;
	while(i < 4)
	{
		if (arg.arr[i] != 0)
		{
			arr[i] = arg.arr[i]->clone();
		}
		i++;
	}

	// cout << " Character оператор '=' клонирует : "
	// << "\e[0;38;5;229m" << "|" << name << "|" << END << endl;

	return (*this); // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}


// Наследуем от ICharacter
std::string const &Character::getName() const
{
	return(name);
}

void Character::equip(AMateria* m)  // надеть Одевает материю , если 0 в 0, цикл , чтобы положить
{
	int i = 0;

	if (!m) // || 4
		return ;

	while(i < 4)
	{
		if (!arr[i])
		{
			arr[i] = m;
			return ;
		}
		i++;
	}
}

void Character::unequip(int idx) // снять определенную материю и ПРОВЕРИТЬ СУЩЕСТВОВАНИЕ (>1 <4) Валидные цифры
{
	if(idx >= 0 && idx < 4 && arr[idx])
		arr[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx < 4 && arr[idx])
		arr[idx]->use(target);
}