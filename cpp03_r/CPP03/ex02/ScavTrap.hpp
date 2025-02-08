#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool guard;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& copy);
		~ScavTrap();
		ScavTrap &operator=(ScavTrap &other);
		void attack(const std::string& target);
		void guardGate();
};

#endif