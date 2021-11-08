
#ifndef ARRAY_HPP
# define ARRAY_HPP

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

// Массив шаблонов Array, содержащий элементы типа T
template <typename T>
class Array
{
	private:
		T *array2;
		unsigned int len;

	public:
		// Конструкция без параметра: создает пустой массив
		Array() {};

		~Array() {
			if (array2)
				delete[]array2;
		};
		// Конструкция с unsigned int n в качестве параметра: создает массив из n элементов, инициализированных по умолчанию
		Array(unsigned int n)
		{
			len = n;
			array2 = new T[n];
		};
		
		Array(Array const &orig)// Копируем класс для других инициализаций и передачи объектов
		{
			len = orig.len;
			int i = 0;
			while(i < len)
			{
				array2[i] = orig.array[i];
				i++;
			}
		};

		Array& operator=(Array const &orig) // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр
		{
			if (this != &orig)
			{
				len = orig.len;
				array2 = orig.array;
			}
				
			return (*this);
		};

		T& operator[](unsigned int index)// Перегрузка оператора индексации
		{
			if (index < 0 || index > len)
				throw ElementIsOutLimits();
			return (array2[index]);
		};


// Обработка исключений - исключительных ситуация (проблем в работе программы)
// std::exception - базовый клас с++ обрабатывающий исключения
// Все классы обработки исключений создаются путем наследования его
		class ElementIsOutLimits : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("\e[0;38;5;205mЭлемент выходит за пределы\e[37;0m");
				}
		};

		// Ф-ия, кот возвращает количество элементов в массиве
		unsigned int size() 
		{
			return (len);
		};
};


#endif