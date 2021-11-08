#include <iostream>
#include "mutantstack.hpp"
# define END "\e[37;0m"

using std::cout;
using std::endl;

// Шаблонные контейнеры, итераторы, алгоритмы
int main()
{
    MutantStack<int> mstack;

    mstack.push(6); // 0
    mstack.push(17); // 1
    mstack.push(22); // 2

    cout << "\e[38;5;220m" << mstack.top() << END << endl; // Самое последнее (top)

    mstack.pop(); // 22 удалим

    cout << " size(mstack) = " << "\e[38;5;141m" << mstack.size() << END << endl; // 2

    mstack.push(3); // 3
    mstack.push(5); // 4
    mstack.push(737); // 5
    mstack.push(0); // 6

    cout << " size(mstack) = " << "\e[38;5;141m" << mstack.size() << END << endl; // 6

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
////// iterator
    cout << "\e[48;5;204m" << "\e[1;38;5;16m" << "Вывод чисел :" << END << endl;
    while (it != ite)
    {
        cout << "\e[38;5;204m" << *it << END << endl;
        ++it;
    }
    std::stack<int> s(mstack);

////// reverse
    cout << endl;
    MutantStack<int>::reverse_iterator itr = mstack.rev_begin();
	MutantStack<int>::reverse_iterator itre = mstack.rev_end();
    cout << "\e[48;5;157m" << "\e[1;38;5;16m" << "Вывод чисел обратный порядок:" << END << endl;
    while (itr != itre)
	{
		cout << "\e[38;5;157m" << *itr << END << endl;
		itr++;
	}
    mstack.push(66); 
    mstack.push(54);

////// top 54
    cout << endl;
    cout << "\e[38;5;220m" << mstack.top() << END << endl; // Самое последнее (top)
    cout << endl;

////// char
    MutantStack<char> arr1;
    arr1.push('h'); 
    arr1.push('e'); 
    arr1.push('l'); 
    arr1.push('l'); 
    arr1.push('o');

	MutantStack<char>::iterator it1 = arr1.begin();
    MutantStack<char>::iterator ite1 = arr1.end();

    cout << "\e[48;5;75m" << "\e[1;38;5;16m" << "Вывод букв:" << END << endl;
    while (it1 != ite1)
    {
        cout << "\e[38;5;75m" << *it1 << END << endl;
        ++it1;
    }

    return (0);
}
