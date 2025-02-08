#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("ClapTrap");

    std::cout << "Testing ClapTrap:" << std::endl;

    clap.attack("Target1");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.takeDamage(10);
    clap.beRepaired(10);
    clap.attack("Target2");
    
    std::cout << std::endl;

    ScavTrap scav("ScavTrap");

    std::cout << "Testing ScavTrap:" << std::endl;
    
    scav.attack("Target3");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();
    scav.attack("Target4");
    scav.takeDamage(50);
    scav.beRepaired(20);
    scav.guardGate();
    
    std::cout << std::endl;

}