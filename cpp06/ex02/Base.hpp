
#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

# define END "\e[37;0m"

using std::cout;
using std::endl;

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif