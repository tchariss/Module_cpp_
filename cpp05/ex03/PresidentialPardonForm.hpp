
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

# define END "\e[37;0m"

using std::cout;
using std::endl;

// Президентская форма
class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();

	public:
		~PresidentialPardonForm();
		
		PresidentialPardonForm(PresidentialPardonForm const &orig);// копируем класс для других инициализаций и передачи объектов
		PresidentialPardonForm& operator=(PresidentialPardonForm const &orig); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

// Наследуем и реализуем executeBur
		void executeBur(Bureaucrat const &executor) const; // выполнять

		PresidentialPardonForm(std::string const &target);
};

#endif