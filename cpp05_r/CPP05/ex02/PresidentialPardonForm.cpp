#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("PresidentialPardonForm", 25, 5, target) {}
PresidentialPardonForm::~PresidentialPardonForm() {}
void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
    if (!getIsSigned()) throw NotSignedException();
    if (executor.getGrade() > getExecGrade()) throw GradeTooLowException();
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
