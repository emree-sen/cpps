#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
    clap.takeDamage(15);
    clap.beRepaired(5);
    
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

    FragTrap frag("FragTrap");

    std::cout << "Testing FragTrap:" << std::endl;
    
    frag.attack("Target5");
    frag.takeDamage(30);
    frag.beRepaired(15);
    frag.highFivesGuys();
    frag.attack("Target6");
    frag.takeDamage(70);
    frag.beRepaired(25);
    frag.highFivesGuys();

    std::cout << std::endl;

    return 0;
}
