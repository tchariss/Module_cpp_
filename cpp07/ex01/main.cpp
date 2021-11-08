#include <iostream>
#include "Iter.hpp"
# define END "\e[37;0m"

using std::cout;
using std::endl;



int main()
{
    int i = 0;
    
    char arr1[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    ::iter(arr1, 6, &::fun);
    cout << endl;

    i = 0;
    char sym = 'A';
    char arr2[6];
    while (i < 6)
	{
		arr2[i] = sym;
        sym+= 1;
		i++;
	}
    ::iter(arr2, 6, &::fun);
    cout << endl;

    i = 0;
    int mas[6];
    while (i < 6)
    {
        mas[i] = i * 2;
        i++;
    }
    ::iter(mas, 6, &::fun);
    cout << endl;

    i = 0;
    float mas2[6];
    while (i < 6)
    {
        mas2[i] = i + 2.12;
        i++;
    }
    ::iter(mas2, 6, &::fun);
    cout << endl;

    return (0);
}
