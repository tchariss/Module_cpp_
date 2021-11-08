#include "Bureaucrat.hpp"
#include "Form.hpp"
// Исключение (exception)

int main()
{
	cout << endl;

	Form blank("Документ770", 4, 18);
	cout << "Form : " << blank << endl;
// 4 число — grade, необходимый для подписания
// 18 число — grade, необходимый для выполнения
	Bureaucrat a1("Tomas", 2);
	Bureaucrat b1("Kiany", 16);
	Bureaucrat c1("Georg", 80);

	cout << "-------------------" << endl;

	try
	{
		a1.beSignedBur(blank);
		cout << "👑 " << a1 << endl;
		cout << "---------------" << endl;
		
		b1.beSignedBur(blank);
		cout << "👑 " << b1 << endl;
		cout << "---------------" << endl;
		
		c1.beSignedBur(blank);
		cout << "👑 " << c1 << endl;
		cout << "---------------" << endl;
		// Bureaucrat c1("Tomas", 80);
		// cout << "👑 " << c1 << endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}


