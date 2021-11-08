#include <iostream>
#include "span.hpp"
# define END "\e[37;0m"

using std::cout;
using std::endl;
// Шаблонные контейнеры, итераторы, алгоритмы
int main()
{
    Span sp = Span(5); // 5 - макс. кол-во элементов

    try 
    {
        sp.addNumber(5);
        sp.addNumber(3); // Low
        sp.addNumber(17); // High
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(121);
        cout << " ▼ " << "\e[38;5;227m" << sp.shortestSpan() << END << endl;
        cout << " ▲ " << "\e[38;5;227m" << sp.longestSpan() << END << endl;
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    cout << "----------" << endl;

    Span sp2 = Span(16);
	try
	{
        sp2.addNumber(66); // High
        sp2.addNumber(2); 
        sp2.addNumber(34); // Low
        sp2.addNumber(6); 
        sp2.addNumber(24);
        sp2.addNumber(16);

        cout << " ▼ " << "\e[38;5;227m" << sp2.shortestSpan() << END << endl;
        cout << " ▲ " << "\e[38;5;227m" << sp2.longestSpan() << END << endl;

        std::vector<int> arr(7, 2);  // 15 - размер; 2 -  чем заполнен
        // std::vector<int> arr(20, 6);  // 20 - размер; 6 - чем заполнен
        sp2.OverloadAddNumber(arr.begin(), arr.end());
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


    return (0);
}
