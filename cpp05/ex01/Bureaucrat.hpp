
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception> // std::exception

class Form;

# define END "\e[37;0m"

using std::cout;
using std::endl;

class Bureaucrat
{
	private:
		std::string const name;
		int grade; // от 1 до 150
// 1 - high(самая высокая оценка)
// 150 - low(самая низкая оценка)

	public:
		Bureaucrat();
		~Bureaucrat();
		
		Bureaucrat(Bureaucrat const &orig);// копируем класс для других инициализаций и передачи объектов
		Bureaucrat& operator=(Bureaucrat const &orig); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

		Bureaucrat(std::string const new_name, int new_grade);
		
		std::string const getName() const;
		int getGrade() const;
		
		void increaseGrade(); // увеличить +
		void decreaseGrade(); // уменьшить -

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

////----------------------////

		void  beSignedBur(Form &obj);

};

// Перегрузка << оператора для ostream, который выводит что-то
// <name>, Bureaucrat grade <grade>
std::ostream& operator<<(std::ostream &cout, Bureaucrat const &orig);


#endif