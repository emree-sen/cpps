#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->attackDamage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
    std::cout << "A ClapTrap instance created with default constructor." << std::endl;
}

ClapTrap::ClapTrap()
{
    this->attackDamage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
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
    if(this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->energyPoints -= 1;
        std::cout << "ClapTrap " << this->name << " attacks to " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    }
    else if(this->hitPoints <= 0)
        std::cout << "ClapTrap " << this->name << " cannot attack, because it is dead." << std::endl;
    else if(this->energyPoints <= 0)
        std::cout << "ClapTrap " << this->name << " doesn't have enough energy points to perform an attack against " << target << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hitPoints <= 0)
        std::cout << this->name << " is already dead." << std::endl;
    else
        std::cout << this->name << " took " << amount << " damage." << std::endl;
    if((this->hitPoints - amount) <= 0)
        this->hitPoints = 0;
    else
        this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->hitPoints <= 0)
        std::cout << this->name << " cannot repair itself, because it is dead." << std::endl;
    else if(this->energyPoints <= 0)
        std::cout << this->name << " doesn't have enough energy points to repair itself." << std::endl;
    else 
    {
        this->energyPoints -= 1;
        this->hitPoints += amount;
        std::cout << this->name << " repaired " << amount << " hit points, it has " << this->hitPoints << " hit points now." << std::endl;
    } 
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->attackDamage = src.attackDamage;
    this->energyPoints = src.energyPoints;
    return *this;
}