
#ifndef EASY_HPP
# define EASY_HPP

# define END "\e[37;0m"
# include <iostream>
# include <vector>

using std::cout;
using std::endl;

// Template(Шаблоны)
// без привязки к типам данным, размерам буферов
// template <параметры_шаблона> тип данных
// template <typename V> = template <сlass V>

// Шаблонная функция easyfind 
/* T является контейнером int, и найдите первое вхождение 
	второго параметра в первом параметре */
// easyfind(T, int)
/* T - контейнер int ,
Ф-ия, кот. находит 1 вхождение 2-го параметра (первый элемент в T) */

/* STL (стандартная библиотека шаблонов) :
содержит набор шаблонов контейнерных классов : iterator, container, algorithm */
// Контейнер - набор, в кот. хранится несколько объектов одного типа
// Итератор - объект, кот. обес-ет доступ к каждому элементу путем перебора элементов, хранящихся в контейнере ST

// vector <аргумент шаблона> имя объекта(аргумент конструктора - тип);

template <typename T>
typename T::iterator easyfind(T &conten, int elem)
{
// T - контейнер
	
	// std::vector<int>::iterator iter_b = begin(vec);
	typename T::iterator obj = std::find(conten.begin(), conten.end(), elem);
// find - Возвращает итератор, указывающий на первый элемент в диапазонe begin-end
	if (obj == conten.end())
		throw std::exception();
	else
		return (obj);
}

#endif