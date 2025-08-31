#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    Bureaucrat boss("Boss", 1);
    Bureaucrat mid("Mid", 50);
    Bureaucrat low("Low", 150);

    ShrubberyCreationForm shrub("garden");
    RobotomyRequestForm robo("Bender");
    PresidentialPardonForm pardon("Ford Prefect");

    boss.signForm(shrub);
    boss.signForm(robo);
    boss.signForm(pardon);

    mid.executeForm(shrub); // should fail (not signed by mid, but signed by boss)
    boss.executeForm(shrub); // should succeed
    boss.executeForm(robo); // should succeed (random)
    boss.executeForm(pardon); // should succeed

    low.signForm(shrub); // should fail
    low.executeForm(shrub); // should fail

    return 0;
}
