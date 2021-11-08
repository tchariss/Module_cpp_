
#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

#include <iostream>
#include <exception> // std::exception
#include "Bureaucrat.hpp"
#include "Form.hpp"

# define END "\e[37;0m"

using std::cout;
using std::endl;

// Робототехническая форма
class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();

	public:
		~RobotomyRequestForm();
		
		RobotomyRequestForm(RobotomyRequestForm const &orig);// копируем класс для других инициализаций и передачи объектов
		RobotomyRequestForm& operator=(RobotomyRequestForm const &orig); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

// Наследуем и реализуем executeBur
		void executeBur(Bureaucrat const &executor) const; // выполнять
		RobotomyRequestForm(std::string const &target);
};

#endif