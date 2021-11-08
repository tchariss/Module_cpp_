#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

//  указатели на функции-члены
class Karen
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Karen();
        ~Karen();
        void complain(std::string level); // ф-я которая может вызывать 4 функции.
};

#endif
