#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	return ("Grade too High(Слишком высокий)\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too Low(Слишком низкий)\n");
}

std::ostream& operator<<(std::ostream &cout, Bureaucrat const &orig)
{
	cout << "Бюрократ " << "\e[0;38;5;85m" << orig.getName() << END <<
	" имеет " << "\e[0;38;5;75m" << orig.getGrade() << END << " grade" << endl;

	return (cout);
}

////----------------------////

void  Bureaucrat::beSignedBur(Form &obj)
{
	
// Подписание формы
	try
	{
		obj.beSigned(*this);
        // cout << "111Бюрократ " << "\e[0;38;5;85m" << getName() << END << " подписывает форму : " << 
		// "\e[0;38;5;189m" << obj.getName() << END << endl;
	}
	catch(const std::exception& e)
	{
		if (getGrade() <= obj.getGradeDone() && getGrade() >= obj.getGradeSignature())
		{
// Подписать может, выполнить нет 
			cout << " Бюрократ " << "\e[0;38;5;85m" << getName() << END << " не может выполнить форму : " 
			<< "\e[0;38;5;189m" << obj.getName() << END " , потому что : ";
		}
		else
		{
			cout << " Бюрократ " << "\e[0;38;5;85m" << getName() << END << " не может подписать форму : " 
			<< "\e[0;38;5;189m" << obj.getName() << END " , потому что : ";
		}
		
		std::cerr << "\e[0;38;5;205m" << e.what() << END << '\n';
	}
	
}

////----------------------////

void Bureaucrat::executeForm(Form const &obj)
{
//  Он должен попытаться выполнить форму, и если это удастся, выведите что-то вроде
// <бюрократ> выполняет <бюрократ><форма>. Если нет, выведите явное сообщение об ошибке.

// Выполнение формы
	try
    {
        obj.executeBur(*this);

		cout << " Бюрократ " << "\e[0;38;5;85m" << getName() << END << 
		" выполняет форму : " << obj.getName() << std::endl;
    }
    catch(std::string s)
    {
        cout << " Бюрократ " << "\e[0;38;5;85m" << getName() << END << 
		" не может выполнить форму : " << "\e[0;38;5;189m" << obj.getName() << END <<
		" , потому что : " << "\e[0;38;5;168m" << s << END << endl;
    }
}

