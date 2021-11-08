#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	int i = 0;
	while(i < 4)
	{
		mas[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource& orig_materia)
{
	*this = orig_materia;
}

MateriaSource::~MateriaSource()
{
	int i = 0;

	while(i < 4)
	{
		if (mas[i])
			delete mas[i];
		i++;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource & orig_materia)
{
	int i = 0;

	while(i < 4)
	{
		if (orig_materia.mas[i] != 0)
		{
			mas[i] = orig_materia.mas[i]->clone();
		}
		i++;
	}

	return (*this); // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

void MateriaSource::learnMateria(AMateria *tmp)
{
	int i = 0;

	if (!tmp) // || 4
		return ;

	while(i < 4)
	{
		if (!mas[i])
		{
			mas[i] = tmp;
			return ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while(i < 4)
	{
		if (mas[i]->getType() == type)
		{
			return (mas[i]);
		}
		i++;
	}
	return (0);
}
