#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137, target) {}
ShrubberyCreationForm::~ShrubberyCreationForm() {}
void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
    if (!getIsSigned()) throw NotSignedException();
    if (executor.getGrade() > getExecGrade()) throw GradeTooLowException();
    std::ofstream ofs((getTarget() + "_shrubbery").c_str());
    ofs << "   _/_/_\n"
           "    /\\   /\\\n"
           "   /  \\_/  \\\n"
           "  / /\\   /\\ \\\n"
           "     /_/_/_" << std::endl;
    ofs.close();
}
