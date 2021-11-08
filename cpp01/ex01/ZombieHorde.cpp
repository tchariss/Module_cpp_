#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name)
{
    if (N < 0)
        return (NULL);

    Zombie *p;
    p = new Zombie[N];
    
    if (!p)
    {
        std::cout << "Не удалось выделить память" << std::endl;
        return (NULL);
    }
    
    for (int i = 0; i < N; ++i)
    {
        p[i].SetName(name);
    }

    return (p);
}