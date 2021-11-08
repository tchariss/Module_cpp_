
#ifndef WHAT_HPP
# define WHAT_HPP

#include <iostream>

using std::cout;
using std::endl;

//////
// Template(Шаблоны)
// без привязки к типам данным, размерам буферов

template <typename V> // V - тип данны
// template <параметры_шаблона> описание_функции
// template <typename V> = template <сlass V>

void swap(V &arg1, V &arg2)  // Поменять местами значения двух аргументов
{
	V tmp = arg1;
	arg1 = arg2;
    arg2 = tmp;
}

template <typename V> // V - тип
V &max(V &arg1, V &arg2) 
{
    if (arg1 > arg2)
        return (arg1);
	else
		return (arg2);
}

template <typename V> // V - тип
V &min(V &arg1, V &arg2)
{
    if (arg1 > arg2)
        return (arg2);
	else
		return (arg1);
}

// class Whatever
// {
// 	public:
// 		Whatever();
// 		~Whatever();

// 		Whatever(Whatever const &orig);// копируем класс для других инициализаций и передачи объектов
// 		Whatever& operator=(Whatever const &orig); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

// 		void swap(int arg1, int arg2);
// 		int min(int arg1, int arg2);
// 		int max(int arg1, int arg2);
// };

#endif