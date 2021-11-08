#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
{
	sign = false;
	// cout << "\e[0;38;5;147m" << "Form конструктор" << endl;
}

Form::~Form()
{
	// cout << "\e[0;38;5;177m" << "Form деструктор" << endl;
}

Form::Form(Form const &orig)
{
	// name = orig.getName();
	signature = orig.getGradeSignature();
	done = orig.getGradeDone();

	sign = orig.getSign();
}

Form& Form::operator=(Form const &orig)
{
	// name = orig.getName();
	signature = orig.getGradeSignature();
	done = orig.getGradeDone();

	sign = orig.getSign();

	return (*this); // // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

////////
Form::Form(std::string const new_name, int new_signature, int new_done, std::string const new_target) : name(new_name), target(new_target) 
{
	// : name(new_name), signature(new_signature), done(new_done)
	// target = new_target;
	signature = new_signature;
	done = new_done;
	
	if (getGradeSignature() < 1 || getGradeDone() < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (getGradeSignature() > 150 || getGradeDone() > 150)
	{
		throw Form::GradeTooLowException();
	}

}

std::string const Form::getName() const
{
	return (name);
}

int Form::getGradeDone() const
{
	return (done);
}

int Form::getGradeSignature() const
{
	return (signature);
}

bool Form::getSign() const
{
	return (sign);
}

//--------------------------//

const char *Form::GradeTooHighException::what() const throw()
{
	return ("\e[0;38;5;205mGrade too High(Слишком высокий)\e[37;0m");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("\e[0;38;5;205mGrade too Low(Слишком низкий)\e[37;0m");
}

std::ostream& operator<<(std::ostream &cout, Form const &orig)
{
	cout << "==============================" << endl;
	cout << "\e[48;5;183m" << "\e[38;5;0m" << orig.getName() << END << endl;

	cout << "Grade, необходимый для подписи : " << orig.getName() << " = |" << "\e[0;38;5;227m" << orig.getGradeSignature()  << END << "|" << endl;;
	cout << "Grade, необходимый для выполнения : " << orig.getName() << " = |" << "\e[0;38;5;227m" << orig.getGradeDone() << END << "|" << endl;;
	cout << "==============================" << endl;

	return (cout);
}

//--------------------------//


void Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() <= signature)
	{
		sign = true;
		cout << " Бюрократ " << "\e[0;38;5;85m" << obj.getName() << END << " подписывает форму : " << 
		"\e[0;38;5;189m" << getName() << END << endl;

	}
	else
	{
		// <bureaucrat> cannot sign <form> because <reason>
		throw Form::GradeTooLowException();
	}
}

//--------------------------//

std::string const Form::getTarget() const
{
    return (target);
}
