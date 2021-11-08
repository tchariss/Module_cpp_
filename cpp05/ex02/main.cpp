#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
// Исключение (exception)

// ShrubberyCreationForm (Required grades: sign 145, exec 137)
// RobotomyRequestForm (Required grades: sign 72, exec 45)
// PresidentialPardonForm (Required grades: sign 25, exec 5)

int main()
{
	cout << endl;

	try
	{
		Bureaucrat a1("Georg", 20); // Shrubbery; Robotomy; Presidential
		cout << "👑 " << a1 << endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		Bureaucrat b1("Edward", 120); // Shrubbery
		Bureaucrat c1("Tomas", 70); // Robotomy; Shrubbery
		cout << "👑 " << b1 << endl;
		cout << "👑 " << c1 << endl;


		RobotomyRequestForm blank1("RobotHome");
		cout << " 📑 " << blank1 << endl;

		ShrubberyCreationForm blank2("New_Scrubbery");
		cout << " 📑 " << blank2 << endl;

		PresidentialPardonForm blank3("Pardon");
		cout << " 📑 " << blank3 << endl;

		b1.beSignedBur(blank1); // ("Edward", 120); // Shrubbery
		b1.beSignedBur(blank2); // ("Edward", 120); // Shrubbery
		b1.beSignedBur(blank3); // ("Edward", 120); // Shrubbery
		cout << "---------------" << endl;
		c1.beSignedBur(blank1); // ("Tomas", 70); // Robotomy; Presidential
		c1.beSignedBur(blank2); // ("Tomas", 70); // Robotomy; Presidential
		c1.beSignedBur(blank3); // ("Tomas", 70); // Robotomy; Presidential
		cout << "---------------" << endl;
	}
	catch (std::exception& e)
	{
		std:: cout << e.what() << std::endl;
	}

// THREE
	cout << endl;
	cout << "\e[38;5;222m"  << "------ShrubberyCreationForm---------" << END << endl; // Shrubbery (sign 145, exec 137)
	Bureaucrat viks("Vika", 22);
	ShrubberyCreationForm file("Three");
	try
	{
		viks.executeForm(file);
		cout << "\e[0;38;5;111m" << "Давай скорее заглянем в файл, созданный ShrubberyCreationForm" << END << endl;
		cout << "\e[0;38;5;111m" << "Там есть что - то необычное" << END << endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}


	cout << endl;
	cout << "\e[38;5;222m" << "--------PresidentialPardonForm-------" << END << endl; // Presidential (sign 25, exec 5)

	Bureaucrat genius("Geniuuus", 4);
	PresidentialPardonForm pardon("PresidentForm1"); // < 5
	try
	{
		genius.beSignedBur(pardon);
		genius.executeForm(pardon);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	
	cout << endl;
// << "\e[48;5;189m" << "\e[38;5;0m"
	cout << "\e[38;5;222m" << "-------RobotomyRequestForm--------" << END << endl; // Robotomy (sign 72, exec 45)

	Bureaucrat georg("Georg", 42);
	RobotomyRequestForm new_blank("RobotomyRequestForm1"); 

	try
	{
		georg.beSignedBur(new_blank);
		georg.executeForm(new_blank);
	}
	catch (std::exception& e)
	{
		std:: cout << e.what() << std::endl;
	}

	return (0);
}



