#include "Fixed.hpp"

// Шесть операторов сравнения: >, ><, >=, <, >
// Четыре арифметических оператора: +, -, * и /

// Приращение — величина на котор. что-либо увеличивается / До, после + /
// Уменьшение / (префиксный)До, (постфиксный)после -

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	cout << "a   : " << COLOR1 <<  a << END << endl;
	cout << "++a : " <<  COLOR2 << ++a << END << endl;
	cout << "a   : " << COLOR1 <<  a << END << endl;
	cout << "a++ : " <<  COLOR2 << a++ << END << endl;
	cout << "a   : " << COLOR1 <<  a << END << endl;

	cout << "\n" << "b   : "<< COLOR3 << b << END << endl;

	cout << "\n" << COLOR4 << Fixed::max(a, b) << END << endl;

	return 0;
}