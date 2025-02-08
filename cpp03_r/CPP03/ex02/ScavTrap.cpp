#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    this->attack_damage = 20;
    this->energy_points = 50;
    this->hit_points = 100;
    this->name = "Basic ScavTrap";
    std::cout << "A ScavTrap instance created with default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->attack_damage = 20;
    this->energy_points = 50;
    this->hit_points = 100;
    this->name = name;
    std::cout << "A ScavTrap instance created with default constructor." << std::endl;
}
ScavTrap::ScavTrap(ScavTrap& copy): ClapTrap(copy)
{
    std::cout << "A ScavTrap instance created with copy constructor." << std::endl;
    *this = copy;
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
	this->hit_points = src.hit_points;
    this->attack_damage = src.attack_damage;
	this->energy_points = src.energy_points;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        this->energy_points -= 1;
        std::cout << "ScavTrap " << this->name << " attacks to " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
    }
    else if(this->hit_points <= 0)
        std::cout << "ScavTrap "  << this->name << " cannot attack, because it is dead." << std::endl;
    else if(this->energy_points <= 0)
        std::cout << "ScavTrap " << this->name << " doesn't have enough energy points to perform an attack against " << target << std::endl; 
}