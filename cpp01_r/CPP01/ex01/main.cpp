#include "Zombie.hpp"

int main()
{
    Zombie* horde = zombieHorde(5, "Zombie");
    int i = 0;
    
    while (i < 5)
    {
        horde[i].announce();
        i++;
    }
    
    delete[] horde;
    return 0;
}