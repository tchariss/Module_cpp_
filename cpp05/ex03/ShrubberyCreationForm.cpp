#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
// target of the form
 
	// sign = false;
	// cout << "\e[0;38;5;147m" << "ShrubberyCreationForm конструктор" << endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// cout << "\e[0;38;5;177m" << "ShrubberyCreationForm деструктор" << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &orig)
: Form(orig)
{
// 	name = orig.name;
// 	signature = orig.getGradeSignature();
// 	done = orig.getGradeDone();

// 	sign = orig.getSign();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &orig)
{
    Form::operator=(orig);
   // name = orig.name;
	// signature = orig.getGradeSignature();
	// done = orig.getGradeDone();

	// sign = orig.getSign();

	return (*this); // // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
Form("New_ShrubberyCreationForm", 145, 137, target)
{
   sign = false;
}

void ShrubberyCreationForm::executeBur(Bureaucrat const &executor) const
{
// ofstream - сделать запись в файл(запись), вывода 
// file.append("_shrubbery")
	if (executor.getGrade() <= getGradeDone())
	{
	   std::ofstream s_output; // создание объекта и подключение файла
// s_output -> объект для управления потоком и далее связь с конкретным файлом
   
      s_output.open(getTarget() + "_shrubbery");
      if (s_output.is_open())
      {
      s_output << "\e[48;5;189m" << "                                   " << END << endl;
      s_output << "\e[48;5;189m" << "               ......              " << END << endl;
      s_output << "\e[48;5;189m" << "           :-.  .:+.  ...          " << END << endl;
      s_output << "\e[48;5;189m" << "        ::*.      .%-   .*+.       " << END << endl;
      s_output << "\e[48;5;189m" << "      .:                  .%-      " << END << endl;     
      s_output << "\e[48;5;189m" << "      -.               .   =:.     " << END << endl;
      s_output << "\e[48;5;189m" << "   -:...                    .**.   " << END << endl;   
      s_output << "\e[48;5;189m" << "  .:                   .      %*   " << END << endl;
      s_output << "\e[48;5;189m" << "  --                    . .  -%*   " << END << endl;
      s_output << "\e[48;5;189m" << "   .::.         .=+..  ..  :=:.    " << END << endl;
      s_output << "\e[48;5;189m" << "      :-.*:.*:..*=..=:.  .%:.      " << END << endl;   
      s_output << "\e[48;5;189m" << "              :.  .%-  ...         " << END << endl;   
      s_output << "\e[48;5;189m" << "              :.  -=.              " << END << endl;
      s_output << "\e[48;5;189m" << "              :.  -%.              " << END << endl;   
      s_output << "\e[48;5;189m" << "             .-    **.             " << END << endl;   
      s_output << "\e[48;5;189m" << "            .:      =:.            " << END << endl;
      s_output << "\e[48;5;189m" << "           *=. --*-::+=.           " << END << endl;
      s_output << "\e[48;5;189m" << "                                   " << END << endl;
      
      }
      else // Не открылся файл
      {
         cout << "\e[38;5;161m" << "Ошибка при открытии файла" << "\e[37;0m" << endl;
	   	s_output.close();
      }
   }
   else
		throw std::string("Бюрократ имеет слишком низкий grade");
}








// Создать файл с именем <target>_shrubbery, который содержит three ASCII
/*

s_output << "               ......              " << endl;
s_output << "           :-.  .:+.  ...          " << endl;
s_output << "        ::*.      .%-   .*+.       " << endl;
s_output << "      .:                  .%-      " << endl;     
s_output << "      -.               .   =:.     " << endl;
s_output << "   -:...                    .**.   " << endl;   
s_output << "  .:                   .      %*   " << endl;
s_output << "  --                    . .  -%*   " << endl;
s_output << "   .::.         .=+..  ..  :=:.    " << endl;
s_output << "      :-.*:.*:..*=..=:.  .%:.      " << endl;   
s_output << "              :.  .%-  ...         " << endl;   
s_output << "              :.  -=.              " << endl;
s_output << "              :.  -%.              " << endl;   
s_output << "             .-    **.             " << endl;   
s_output << "            .:      =:.            " << endl;
s_output << "           *=. --*-::+=.           " << endl;

*/