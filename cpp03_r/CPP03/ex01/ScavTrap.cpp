#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    this->guard = false;
    this->name = "Basic ScavTrap";
    std::cout << "A ScavTrap instance created with default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    this->guard = false;
    this->name = name;
    std::cout << "A ScavTrap instance created with default constructor." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destroyed with deconstructor" <<  std::endl; 
}
void ScavTrap::guardGate(void)
{
    if (this->guard == true)
    {
        this->guard = false;
        std::cout << "ScavTrap" << this->name << "'s Guard Mode become deactive right now" << std::endl;
    }
    else
    {
        this->guard = true;
        std::cout << "ScavTrap's Guard Mode become active right now" << std::endl;
    }
}

ScavTrap& ScavTrap::operator=(ScavTrap &src)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->name = src.name;
	this->guard = src.guard;
	this->hitPoints = src.hitPoints;
    this->attackDamage = src.attackDamage;
	this->energyPoints = src.energyPoints;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->energyPoints -= 1;
        std::cout << "ScavTrap " << this->name << " attacks to " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    }
    else if(this->hitPoints <= 0)
        std::cout << "ScavTrap "  << this->name << " cannot attack, because it is dead." << std::endl;
    else if(this->energyPoints <= 0)
        std::cout << "ScavTrap " << this->name << " doesn't have enough energy points to perform an attack against " << target << std::endl; 
}