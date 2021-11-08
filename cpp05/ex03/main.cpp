#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
// Исключение (exception)

// ShrubberyCreationForm (Required grades: sign 145, exec 137)
// RobotomyRequestForm (Required grades: sign 72, exec 45)
// PresidentialPardonForm (Required grades: sign 25, exec 5)

int main()
{
	cout << endl;

	Intern someRandomIntern;

/////////////
	Form* r1;
	try
	{
		r1 = someRandomIntern.makeForm("ShrubberyCreation_form", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << "------------------------------" << endl;

/////////////
	Form* r2;
	try
	{
		r2 = someRandomIntern.makeForm("RobotomyRequest_form", "Vikos");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << "------------------------------" << endl;

/////////////
	Form* r3;
	try
	{
		r3 = someRandomIntern.makeForm("PresidentialPardon_form", "Denis");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	cout << "------------------------------" << endl;

/////////////
	Form* r4;
	try
	{
		r4 = someRandomIntern.makeForm("non", "Person");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << "------------------------------" << endl;

/////////////

	Form* r5;
	try
	{
		Bureaucrat Tomas("Tomas", 4);
		r5 = someRandomIntern.makeForm("RobotomyRequest_form", "City");
		Tomas.beSignedBur(*r5);
		Tomas.executeForm(*r5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl;

	return (0);
}



