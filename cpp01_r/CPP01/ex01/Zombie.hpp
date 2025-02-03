#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        void setName(std::string name);
        ~Zombie();
        void announce();
};

Zombie* zombieHorde(int n, std::string name);

#endif