
#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

#include <iostream>
#include <exception> // std::exception
#include "Bureaucrat.hpp"
#include <fstream> // для чтения/записи данных из/в файл
#include "Form.hpp"

# define END "\e[37;0m"

using std::cout;
using std::endl;

// Создание кустарника
class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();

	public:
		~ShrubberyCreationForm();
		
		ShrubberyCreationForm(ShrubberyCreationForm const &orig);// копируем класс для других инициализаций и передачи объектов
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &orig); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

// Наследуем и реализуем executeBur
		void executeBur(Bureaucrat const &executor) const; // выполнять
		ShrubberyCreationForm(std::string const &target);

};

#endif
