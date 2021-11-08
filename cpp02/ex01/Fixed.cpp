#include "Fixed.hpp"

Fixed::Fixed()
{
	n_int = 0;
	cout << "\e[0;38;5;157m" << "Default constructor called" << "\e[37;0m" << endl;
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
    
	this->n_int = arg.n_int;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    // cout << "\e[0;38;5;227m" << "getRawBits member function called" << "\e[37;0m"<< endl;
	return (n_int);
}

void Fixed::setRawBits(int const raw)
{
	n_int = raw;
}

//// new function
Fixed::Fixed(int value)
{
	this->n_int = value << this->f_bit;
	cout << "\e[0;38;5;189m" << "Int constructor called" << "\e[37;0m"<< endl;
}

Fixed::Fixed(float bits)
{
	this->n_int = roundf(bits * (1 << this->f_bit));
	cout << "\e[0;38;5;209m" << "Float constructor called" << "\e[37;0m"<< endl;
}



float Fixed::toFloat(void) const
{   
	return((float)this->n_int / (float)(1 << this->f_bit));
}

int Fixed::toInt(void) const
{
	return(this->n_int >> this->f_bit);
}

// ostream – выходной поток
std::ostream& operator<< (std::ostream& cout, const Fixed &point_a)
{
	cout << point_a.toFloat();
	return (cout);
}