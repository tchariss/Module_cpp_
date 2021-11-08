#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
   // cout << "\e[0;38;5;177m" << "Intern конструктор" << endl;
}

Intern::~Intern()
{
	// cout << "\e[0;38;5;177m" << "Intern деструктор" << endl;
}

Intern::Intern(Intern const &orig)
{
	*this = orig;
}

Intern& Intern::operator=(Intern const &orig)
{
	if (this == &orig)
    	return (*this);

	return (*this); // // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

const char *Intern::InternCannotCreateForm::what() const throw()
{
	return ("\e[0;38;5;205mIntern Cannot Create Form (Не может создать)\e[37;0m\n");
}



Form *Intern::makeForm(const std::string name_form, std::string const target_form)
{
	std::string arr_form[3] = {"ShrubberyCreation_form", "RobotomyRequest_form", "PresidentialPardon_form"};

    int count = 0;

	while(count < 3 && arr_form[count] != name_form)
		count++;

	switch (count)
	{
		case 0:
		{
			cout << "Стажер создают форму: " << "\e[0;38;5;147m" << name_form << END 
			<< ", предназначенную для : " << "\e[0;38;5;157m" << target_form << END << endl;
			
			return (new RobotomyRequestForm(target_form));
            break ;
		}
		case 1:
		{
			cout << "Стажер создают форму: " << "\e[0;38;5;147m" << name_form << END 
			<< ", предназначенную для : " << "\e[0;38;5;157m" << target_form << END << endl;
			
			return (new ShrubberyCreationForm(target_form));
            break ;
		}
		case 2:
		{
			cout << "Стажер создают форму: " << "\e[0;38;5;147m" << name_form << END 
			<< ", предназначенную для : " << "\e[0;38;5;157m" << target_form << END << endl;
			
			return (new PresidentialPardonForm(target_form));
            break ;
		}
		default :
		{
			cout << "Форма: " << "\e[0;38;5;147m" << name_form << END 
			<< ", предназначенная для : " << "\e[0;38;5;157m" << target_form << END << endl;
			throw Intern::InternCannotCreateForm();
			break ;
		}
	}
}

