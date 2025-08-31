#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45, target) {}
RobotomyRequestForm::~RobotomyRequestForm() {}
void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
    if (!getIsSigned()) throw NotSignedException();
    if (executor.getGrade() > getExecGrade()) throw GradeTooLowException();
    std::cout << "* drilling noises *" << std::endl;
    if (std::rand() % 2)
        std::cout << getTarget() << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Robotomy failed for " << getTarget() << std::endl;
}
