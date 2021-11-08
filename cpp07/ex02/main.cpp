#include <iostream>
#include "Array.hpp"
# define END "\e[37;0m"

using std::cout;
using std::endl;


int main()
{
//// Char int 
    Array<int> mas1(8);

    // unsigned int count = 0;
    // while(count < mas1.size())
    // {   
    //     mas1[count] = count * 2;
    //     count++;
    // }

    try
    {
        cout << mas1[10] << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

//// Char array  
    cout << "-----------------------" << endl;
    unsigned int i = 0;
    Array<char> mas2(8);
    while(i < mas2.size())
    {   
        mas2[i] = 'a' + i;
        i++;
    }

    i = 0;
    try
    {
        while(i < mas2.size())
        {   
            cout << "\e[38;5;117m" << '|' << mas2[i] << '|' << END;
            i++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    cout << endl;

//// Double array
    cout << "-----------------------" << endl;
    i = 0;
    Array<double> mas3(8);
    while(i < mas3.size())
    {   
        mas3[i] = i + 0.4;
        i++;
    }

    i = 0;
    try
    {
        while(i < mas3.size())
        {   
            cout << "\e[38;5;117m" << '|' << mas3[i] << '|' << END;
            i++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    cout << endl;   
    return (0);
}
