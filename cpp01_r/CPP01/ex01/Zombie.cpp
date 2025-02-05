#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "Zombie";
}

void Zombie::announce()
{
    std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}