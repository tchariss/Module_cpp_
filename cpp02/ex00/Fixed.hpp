#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
using std::cout;
using std::endl;

class Fixed
{
	private:
		int n_int; // Целое число для хранения значения с фиксированной точкой
		static const int f_bit = 8; // Статическое постоянное целое число для хранения количества дробных битов
// Этой константой всегда будет фиксированное значение 8.

	public:
		Fixed(); // Конструктор по умолчанию, который иниц знач фикс—ой точки = 0
		~Fixed(); // Деструктор

		Fixed(const Fixed &arg); // Конструктор копирования // const - чтобы не изменить переменную
// Конструктор с аргументом в виде ссылки на другой объект такого же типа (Fixed)
// Из объекта (arg) формируется состояние нового объекта

		Fixed& operator= (const Fixed &arg); // Перегрузка оператора присваивания

		int getRawBits(void) const; // возвращает исходное знач фикс—ой точкой
		void setRawBits(int const raw); // задает исходное знач фикс—ой точкой // raw — переменная
};

#endif