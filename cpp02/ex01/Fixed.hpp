#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
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

		Fixed(int value);
		Fixed(float bits);
		Fixed(const Fixed &arg); // Конструктор копирования 

		Fixed& operator= (const Fixed &arg); // Перегрузка оператора присваивания

		int getRawBits(void) const; // возвращает исходное знач фикс—ой точкой
		void setRawBits(int const raw); // задает исходное знач фикс—ой точкой // raw — переменная
		
		float toFloat(void) const; // преобразует значение с фиксированной точкой в значение с плавающей точкой.
		int toInt(void) const; // преобразует значение с фиксированной точкой в целое значение.
};

// ostream – выходной поток // перегрузка <<
// Перегрузка = функция + "operator" + символ перегружаемого оператора
// Перегружаемый оператор определяется как метод класса
std::ostream& operator<< (std::ostream& cout, const Fixed &point_a);

#endif
