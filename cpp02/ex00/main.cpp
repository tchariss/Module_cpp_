#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b(a); // копия объекта (b) из объекта (а)
	Fixed c;

	c = b; // вызывает перегруженное присваивание
	
	cout << a.getRawBits() << endl;
	cout << b.getRawBits() << endl;
	cout << c.getRawBits() << endl;
	return 0;
}