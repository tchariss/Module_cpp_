#include <iostream>
#include <limits>
#include <cmath>
# define END "\e[37;0m"

using std::cout;
using std::endl;

// Приведение типов
// Программа, которая преобразует входной аргумент по типу и выводит его

// static_cast - позволяет изменять только типы, которые логически преобразованы ; 
// dynamic_cast поддерживает преобразование типов только между указателями или ссылками между объектами, созданными из классов(родитель - дочка); 

// static_cast <тип к которому хотим преобразовать> (наша переменная)
// static_cast <int> (value);

int what_literal(char *s)
{
    if (strcmp(s, "nan") == 0 || strcmp(s, "nanf") == 0)
    {
        cout << "char : impossible" << endl;
        cout << "int : impossible" << endl;
        cout << "float : nanf" << endl;
        cout << "char : nan" << endl;
		return (1);
    }
    else if (strcmp(s, "-inf") == 0 || strcmp(s, "+inf") == 0 ||
    strcmp(s, "-inff") == 0 || strcmp(s, "+inff") == 0)
    {
        cout << "char : impossible" << endl;
        cout << "int : impossible" << endl;
		if (strcmp(s, "-inff") == 0 || strcmp(s, "-inf") == 0)
		{
			cout << "float : -inf" << endl;
        	cout << "char : -inf" << endl;
		}
		else
		{
        	cout << "float : inf" << endl;
        	cout << "char : inf" << endl;
		}
		return (1);
	}

	return (0);
}

int check_digit(char *s)
{
    int i = 0;

    if (s[i] == '-' || s[i] == '+')
        i++;
    while(s[i])
    {
        if (!isdigit(s[i]))
            return (1);
        i++;
    }
    return (0);
}

// float | 42.0f | | -1.26f |
int check_f(char *s)
{
    int i = 0;

    if (s[i] == '-' || s[i] == '+')
        i++;
    if (isdigit(s[i]))
        i++;
    else
        return (1);
    while(s[i])
    {
        if (isdigit(s[i]) || s[i] == '.' || s[i] == 'f')
            i++;
        else
            return (1);
    }
    if (s[i] == '\0' || (s[i] == 'f' && s[i + 1] == '\0'))
	{
        return (0);
	}
    else
        return (1);
}

// 0f ; 0.0f
void check_zerof(char *s, float f1, double d1)
{
	double num = atof(s); // 0 => 0.0

	if (num - static_cast<int>(num) == 0.0)
	{
		cout << "float : " << "\e[0;38;5;214m"<< f1 << ".0f" << END << endl;
    	cout << "double : " << "\e[0;38;5;204m"<< d1 << ".0" << END << endl;
	}
	else
	{
		cout << "float : " << "\e[0;38;5;214m" << f1 << "f" << END << endl;
   	 	cout << "double : " << "\e[0;38;5;204m" << d1 << "" << END << endl;
	}
}

// Функции, преобразующие строки в -> int, float, double — stoi (), stof (), stod ()
int main(int ac, char **av)  // число или 1 char символ
{
// Литералы(константные значения) -  nan ; nanf ; inf ; inff
// inf — означает бесконечность
// nan(not a number) - означает "не число"

// char : ’c’, ’a’... 42 - '*'
//  int : 0, -42, 42...
//  float : 0.0, -4.2, 4.2...: -inff, +inff and nanf
//  double : 0.0, -4.2, 4.2...: -inf, +inf and nan.

// Проверка количества аргументов
	if (ac != 2)
	{
		cout << "\e[0;38;5;205m" << "Недостаточное количество аргументов" << END << endl;
		return (-1);
	}

	char *str = av[1];

	char sym;
	long int i = 0;
	float f1;
	double d1;

// atof - строка в double (В ошибки вернет 0, а переменная errno устанав­ливается равной ERANGE(значение, которое не помещается в переменную.))
// atol - строка в long int (В ошибки вернет 0) 123.23 = 123

// Проверка валидности аргументов
// check int
	if (check_digit(str) != 1)
	{
        i = atol(str);
		sym = static_cast<char>(i);
	    f1 = static_cast<float>(i);
	    d1 = static_cast<double>(i); 
	}

// check float
    else if (check_f(str) != 1)
    {
        d1 = atof(str);
        f1 = static_cast<float>(d1);
        sym = static_cast<char>(d1);
	    i = static_cast<int>(d1);
    }
// check char
	else 
	{	
        sym = *str;
	    i = static_cast<int>(*str);
	    f1 = static_cast<float>(*str);
	    d1 = static_cast<double>(*str);
    }

	// nan ; nanf ; inf ; inff
    int flag = what_literal(str);

// INT_MAX ; INT_MIN
	double i_limit = atof(str);
    if ((i_limit > INT_MAX || i_limit < INT_MIN) && flag != 1)
    {
        cout << "char : impossible" << endl;
        cout << "int : impossible" << endl;
        f1 = static_cast<float>(i_limit);
	    d1 = static_cast<double>(i_limit);
        cout << "float : " << f1 << endl;
        cout << "double : " << d1 << endl;
		// flag = 1;
    }

/* atof - в случае ошибки вернет 0, а переменная errno устанав­ливается равной 
    ERANGE — значение, которое не помещается в переменную */
    if (errno == ERANGE)
    {
        cout << "char : impossible" << endl;
        cout << "int : impossible" << endl;
        cout << "float : impossible" << endl;
        cout << "char : impossible" << endl;
    }

	if (flag != 1)
	{
		if (sym < 33 || sym > 127)
			cout << "char : " << "\e[0;38;5;154m" << "Non displayable" << END << endl;
		else
			cout << "char : " << "\e[0;38;5;154m" << "'" << sym << "'" << END << endl;
    	cout << "int : " << "\e[0;38;5;184m"<< i << END << endl;
		check_zerof(str, d1, f1);
	}

	return (0);
}
