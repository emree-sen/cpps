#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->attack_damage = 0;
    this->energy_points = 10;
    this->hit_points = 10;
    std::cout << "A ClapTrap instance created with default constructor." << std::endl;
}

ClapTrap::ClapTrap()
{
    this->attack_damage = 0;
    this->energy_points = 10;
    this->hit_points = 10;
    this->name = "Basic CrapTrap";
    std::cout << "A ClapTrap instance created with default constructor." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "A ClapTrap instance created with copy constructor." << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "A ClapTrap instance destroyed with deconstructor." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        this->energy_points -= 1;
        std::cout << "ClapTrap " << this->name << " attacks to " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
    }
    else if(this->hit_points <= 0)
        std::cout << "ClapTrap " << this->name << " cannot attack, because it is dead." << std::endl;
    else if(this->energy_points <= 0)
        std::cout << "ClapTrap " << this->name << " doesn't have enough energy points to perform an attack against " << target << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hit_points <= 0)
        std::cout << this->name << " is already dead." << std::endl;
    else
        std::cout << this->name << " took " << amount << " damage." << std::endl;
    if((this->hit_points - amount) <= 0)
        this->hit_points = 0;
    else
        this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->hit_points <= 0)
        std::cout << this->name << " cannot repair itself, because it is dead." << std::endl;
    else if(this->energy_points <= 0)
        std::cout << this->name << " doesn't have enough energy points to repair itself." << std::endl;
    else 
    {
        this->energy_points -= 1;
        this->hit_points += amount;
        std::cout << this->name << " repaired " << amount << " hit points, it has " << this->hit_points << " hit points now." << std::endl;
    } 
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->name = src.name;
    this->hit_points = src.hit_points;
    this->attack_damage = src.attack_damage;
    this->energy_points = src.energy_points;
    return *this;
}
