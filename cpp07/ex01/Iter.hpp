
#ifndef ITER_HPP
# define ITER_HPP

# define END "\e[37;0m"
#include <iostream>

using std::cout;
using std::endl;

//////
// Template(Шаблоны)
// без привязки к типам данным, размерам буферов

// template <typename V> // V - тип данны
// template <параметры_шаблона> описание_функции
// template <typename V> = template <сlass V>

// Шаблон функции iter, принимает 3 параметра
// 1 - Адрес массива
// 2 - Длина массива
// 3 - Функция, вызываемая для каждого элемента массива

template <typename V>
void iter(V *arr, int len, void (*fun)(V &arr))  
{
	int i = 0;
	
	while(i < len)
	{
		fun(arr[i]);
		i++;
	}
}

template <typename V>
void fun(V &arg)  
{
	cout << "\e[38;5;153m" << "|" << arg << "| " << END;
}


#endif