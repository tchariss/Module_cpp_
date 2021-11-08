#include <iostream>
#include "whatever.hpp"
# define END "\e[37;0m"

using std::cout;
using std::endl;

int main()
{
    int a = 2;
    int b = 3;

    ::swap(a, b);
    cout << "a = " << "\e[38;5;227m" << a << END
    ", b = " <<  "\e[38;5;227m" << b << END << endl;
    cout << " ▲ max(a, b) = " << "\e[0;38;5;193m" << ::max(a, b) << END<< endl;
    cout << " ▼ min(a, b) = " << "\e[0;38;5;183m" << ::min(a, b) << END << endl;

    cout << endl;
    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    cout << "c = " <<  "\e[0;38;5;227m" << c << END
    ", d = " <<  "\e[0;38;5;227m" << d << END << endl;
    cout << " ▲ max(c, d) = " << "\e[0;38;5;193m" << ::max(c, d) << END<< endl;
    cout << " ▼ min(c, d) = " << "\e[0;38;5;183m" << ::min(c, d) << END << endl;
    

// my test

    cout << endl;
    char d1 = 'D';
    char s1 = 'S';

    ::swap(d1, s1);
    cout << "s1 = " <<  "\e[0;38;5;227m" << s1 << END
    ", d1 = " <<  "\e[0;38;5;227m" << d1 << END << endl;
    cout << " ▲ max(s1, d1) = " << "\e[0;38;5;193m" << ::max(s1, d1) << END<< endl;
    cout << " ▼ min(s1, d1) = " << "\e[0;38;5;183m" << ::min(s1, d1) << END<< endl;

    return (0);
}
