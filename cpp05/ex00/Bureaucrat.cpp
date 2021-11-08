#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	// cout << "\e[0;38;5;147m" << "Bureaucrat конструктор" << endl;
}

Bureaucrat::~Bureaucrat()
{
	// cout << "\e[0;38;5;177m" << "Bureaucrat деструктор" << endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &orig)
{
	// name = orig.getName();
	grade = orig.getGrade();
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &orig)
{
	// name = orig.getName();
	grade = orig.getGrade();

	return (*this); // // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

////////
Bureaucrat::Bureaucrat(std::string const new_name, int new_grade) : name(new_name), grade(new_grade)
{
	// : name(new_name), grade(new_grade)

	// this->name = new_name;
	// this->grade = new_grade;
	
	if (getGrade() < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (getGrade() > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}

}

std::string const Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}
		
void Bureaucrat::increaseGrade() // увеличить +
{
	grade++;
	// cout << "Увеличение grade : " << "\e[0;38;5;117m" << getGrade() << END << endl;
	if (getGrade() > 150)
		throw Bureaucrat::GradeTooLowException(); 
}

void Bureaucrat::decreaseGrade() // уменьшить -
{
	grade--;
	// cout << "Уменьшение grade : " << "\e[0;38;5;98m" << getGrade() << END << endl;
	if (getGrade() < 1)
		throw Bureaucrat::GradeTooHighException(); 
} 

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat_Exception: Grade too High(Слишком высокий)");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat_Exception: Grade too Low(Слишком низкий)");
}

std::ostream& operator<<(std::ostream &cout, Bureaucrat const &orig)
{
	cout << "Бюрократ " << "\e[0;38;5;85m" << orig.getName() << END <<
	" имеет " << "\e[0;38;5;75m" << orig.getGrade() << END << " grade" << endl;

	return (cout);
}
