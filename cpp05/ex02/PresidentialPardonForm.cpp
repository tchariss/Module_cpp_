#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	// sign = false;
	// cout << "\e[0;38;5;147m" << "PresidentialPardonForm конструктор" << endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// cout << "\e[0;38;5;177m" << "PresidentialPardonForm деструктор" << endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &orig)
: Form(orig)
{
	// name = orig.getName();
	// signature = orig.getGradeSignature();
	// done = orig.getGradeDone();

	// sign = orig.getSign();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &orig)
{
	Form::operator=(orig);
	// name = orig.getName();
	// signature = orig.getGradeSignature();
	// done = orig.getGradeDone();

	// sign = orig.getSign();

	return (*this); // // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}


PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
Form("New_PresidentialPardonForm", 25, 5, target)
{
	// sign = false;
}

void PresidentialPardonForm::executeBur(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= getGradeDone())
	{
    	cout << " 🔎 Говорит нам, что цель : " << "\e[38;5;141m" <<
		executor.getName() << END << " была помилована Зафодом Библброксом. " <<endl;
	}
	else
		throw std::string("\033[203mБюрократ имеет слишком низкий grade\033[0m");
}

