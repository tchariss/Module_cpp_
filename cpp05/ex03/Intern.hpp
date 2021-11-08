
#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

# define END "\e[37;0m"

using std::cout;
using std::endl;

// Создание Стажера
class Intern 
{
	public:
		Intern();
		~Intern();
		
		Intern(Intern const &orig);// копируем класс для других инициализаций и передачи объектов
		Intern& operator=(Intern const &orig); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

		Form *makeForm(std::string const name_form, std::string const target_form); // Стажер создает <форму>

// Обработка исключений - исключительных ситуация (проблем в работе программы)
// std::exception - базовый клас с++ обрабатывающий исключения
// Все классы обработки исключений создаются путем наследования его
		class InternCannotCreateForm : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
};

#endif
