#include "Bureaucrat.hpp"

// Исключение (exception)

int main()
{
	cout << endl;

	try
	{
		Bureaucrat a1("Georg", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	cout << "----------------------" << endl;

	try
	{
		Bureaucrat b1("Edward", 151);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	cout << "----------------------" << endl;

	try
	{
		Bureaucrat c1("Tomas", 80);
		cout << "👑 " << c1 << endl;
		
		cout << "Увеличение grade(+1) : текущий = " << "\e[0;38;5;226m" << c1.getGrade() << END << endl;
		c1.increaseGrade();
		cout << "👑 " << c1 << endl;

		cout << "Уменьшение grade(-1) : текущий = " << "\e[0;38;5;226m" << c1.getGrade() << END << endl;
		c1.decreaseGrade();
		cout << "👑 " << c1;
		
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}



// try / catch
 
// 	try // пробую
// 	{
// 		cout << "Попытка" << endl;


// 		cout << "Успешно" << endl;
// 	}
// 	catch (const std::exception &obj) // что - то не так и захожу сюда, ловлю
// // Константная ссылка на объект(obj) типа exception
// 	{
// 		cout << obj.what() << endl;// что случилось
// // what - что произошло / случилось (Возвращает указатель на char — строчку);
// 		cout << "Ошибка" << endl;
// 	}
// }