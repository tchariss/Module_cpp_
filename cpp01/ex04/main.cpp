#include <iostream>
#include <fstream> // для чтения/записи данных из/в файл
#include <string>
// using std::cout;
// using std::endl;

/*
ofstream - сделать запись в файл(запись), вывода 
ifstream - считать данные из файл(чтение), ввода
*/

/*Напишите программу замены, которая выполняет следующие действия.
- Он читает файл с именем, введенным в качестве аргумента, преобразует все элементы в s1 в s2 FILENAME.replaceи выводит как.
std::stringВ случае с классом replace, кроме функций, допускается.
Заголовки, связанные с файловым управлением, в c использовать нельзя.
Отправьте с тестовыми файлами*/


int main(int argc, char **argv)
{
	std::string file, str1, str2, new_file;
// читать файл в арг

	if (argc != 4)
	{
		std::cout << "\e[38;5;161m" << "Некорректное количество аргументов" << "\e[37;0m" << std::endl;
		return (-1);
	}

	file = argv[1];
	str1 = argv[2];
	str2 = argv[3];

	new_file = argv[1];
	new_file.append(".replace"); // создадим файл новый


// ifstream input("input_file.txt"); == fstream input("input_file.txt",istream::in);
// ofstream output("output_file.txt"); == fstream output("output_file.txt",ostream::out);

	std::ifstream s_input; // создание объекта и подключение файла
	std::ofstream s_output(new_file);

// s_input/s_output -> объект для управления потоком и далее связь с конкретным файлом
	s_input.open(file);

	if (s_input == 0)
	{
		std::cout << "\e[38;5;161m" << "Тук-тук, кто-то явно пустой" << "\e[37;0m" << std::endl;
		return (-1);
	}
	if (!s_input.is_open())
	{
		std::cout << "\e[38;5;161m" << "Ошибка при открытии файла" << "\e[37;0m" << std::endl;
		s_input.close();
		return (-1);
	}
	else
	{
		std::string read_s;
		size_t check_pos;

		while (1)
		{
			std::getline(s_input, read_s);
			while (1)
			{
				check_pos = read_s.find(str1);

				if (check_pos == std::string::npos) // check_pos != 1 || 0 || позиции найденной
				{
					s_output << read_s;
					break ;
				}
				s_output << read_s.substr(0, check_pos);
				s_output << str2;
				read_s = read_s.substr(check_pos + str1.size());
			}
			if (s_input.eof() == true)
				break ;
			s_output << std::endl;
		}
	}
	s_input.close();

	return (0);
}