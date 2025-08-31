#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm {
public:
    ShrubberyCreationForm(const std::string& target);
    virtual ~ShrubberyCreationForm();
    void execute(Bureaucrat const& executor) const;
};
#endif
