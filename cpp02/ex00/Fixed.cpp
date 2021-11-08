#include "Fixed.hpp"

Fixed::Fixed()
{
	n_int = 0;
	std::cout << "\e[0;38;5;157m" << "Default constructor called" << "\e[37;0m" << endl;
}

Fixed::~Fixed()
{
	cout << "\e[0;38;5;104m" << "Destructor called" << "\e[37;0m" << endl;
}

Fixed::Fixed(const Fixed &arg) // Конструктор копирования
{
    cout << "\e[0;38;5;183m" << "Copy constructor called" << "\e[37;0m"<< endl;
	*this = arg;
}

Fixed& Fixed::operator= (const Fixed &arg) // Перегруженное присваивание
{
    cout << "\e[0;38;5;117m" << "Assignation operator called" << "\e[37;0m"<< endl;
    this->n_int = arg.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    cout << "\e[0;38;5;227m" << "getRawBits member function called" << "\e[37;0m"<< endl;
	return (n_int);
}

void Fixed::setRawBits(int const raw)
{
	n_int = raw;
}