#include "ClapTrap.hpp"

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
}