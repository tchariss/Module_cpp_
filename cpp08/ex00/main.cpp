#include <iostream>
#include "easyfind.hpp"
# define END "\e[37;0m"

using std::cout;
using std::endl;
// Шаблонные контейнеры, итераторы, алгоритмы
int main()
{
    int i = 0;
    std::vector<int> mas1(6);
	std::vector<int>::iterator obj;
    
    while (i < 6)
    {
        mas1[i] = i + 2;
        i++;
    }

    try
    {
        obj = easyfind(mas1, 4);
		cout << "\e[38;5;227m" << "|" << *obj << "|" << END << endl;
        obj = easyfind(mas1, 8);
		cout << "\e[38;5;227m" << "|" << *obj << "|" << END << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "\e[0;38;5;205mParameter not found\e[37;0m" << '\n';
    }
    
/////////
    cout << endl;
    i = 0;
    std::vector<int> mas2(5);
    
    mas2.push_back(10);
    mas2.push_back(8);
    mas2.push_back(22);
    mas2.push_back(5);
    mas2.push_back(11);

    try
    {
        obj = easyfind(mas2, 5);
		cout << "\e[38;5;227m" << "|" << *obj << "|" << END << endl;
        obj = easyfind(mas2, 50);
		cout << "\e[38;5;227m" << "|" << *obj << "|" << END << endl;
        obj = easyfind(mas2, 22);
		cout << "\e[38;5;227m" << "|" << *obj << "|" << END << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "\e[0;38;5;205mParameter not found\e[37;0m" << '\n';
    }

    return (0);
}
