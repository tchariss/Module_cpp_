
#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception> // std::exception
#include "Bureaucrat.hpp"

# define END "\e[37;0m"

using std::cout;
using std::endl;

class Bureaucrat;

class Form
{
	protected:
		std::string const name;
		bool sign;
		int signature;
		int done;
// ----------------------------- //
		std::string const target;

	public:
		Form();
		virtual ~Form();
		
		Form(Form const &orig);// копируем класс для других инициализаций и передачи объектов
		Form& operator=(Form const &orig); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

		Form(std::string const new_name, int new_signature, int new_done, std::string const new_target);

		std::string const getName() const;
		int getGradeSignature() const;
		int getGradeDone() const;

		bool getSign() const;

////----------------------////
		void beSigned(Bureaucrat &obj);

////----------------------////
    	std::string const getTarget() const;
		virtual void executeBur(Bureaucrat const &obj) const = 0; // выполнять

/* 	
	try(пытаться) — начало блока исключений
	catch(поймать) — начало блока, "ловящего" исключение
	throw(бросить) —  ключевое слово, "создающее" ("возбуждающее") исключение
*/

// Обработка исключений - исключительных ситуация (проблем в работе программы)
// std::exception - базовый клас с++ обрабатывающий исключения
// Все классы обработки исключений создаются путем наследования его
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw();
// Возвращает: указатель на строку с завершающим нулем с поясняющей информацией
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
};

// Перегрузка << оператора для ostream, который выводит что-то
// <name>, Form grade <grade>
std::ostream& operator<<(std::ostream &cout, Form const &orig);


#endif