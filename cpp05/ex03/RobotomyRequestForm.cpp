#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	// sign = false;
	// cout << "\e[0;38;5;147m" << "RobotomyRequestForm конструктор" << endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// cout << "\e[0;38;5;177m" << "RobotomyRequestForm деструктор" << endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &orig)
: Form(orig)
{
	// name = orig.getName();
	// signature = orig.getGradeSignature();
	// done = orig.getGradeDone();

	// sign = orig.getSign();
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &orig)
{
	Form::operator=(orig);
	// name = orig.getName();
	// signature = orig.getGradeSignature();
	// done = orig.getGradeDone();

	// sign = orig.getSign();

	return (*this); // // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}


RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
Form("New_RobotomyRequestForm", 72, 45, target)
{
	// sign = false;
}

void RobotomyRequestForm::executeBur(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= getGradeDone())
	{
    	cout << " 🔊 Издает некоторые звуки бурения и сообщает нам, что цель : " << endl;
    
		if (rand() % 2)
   	    	cout << "\e[38;5;141m" << getTarget() << END << " была успешно автоматизирована в 50% случаев" <<endl;
   		else
   	    	cout << "\e[38;5;141m" << getTarget() << END << "не автоматизирована :(" <<endl;
	}
	else
		throw std::string("Бюрократ имеет слишком низкий grade");
}
