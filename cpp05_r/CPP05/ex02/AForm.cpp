#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string& name, int signGrade, int execGrade, const std::string& target)
    : name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade), target(target)
{
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}
AForm::AForm(const AForm& other)
    : name(other.name), isSigned(other.isSigned), signGrade(other.signGrade), execGrade(other.execGrade), target(other.target) {}
AForm& AForm::operator=(const AForm& other) {
    if (this != &other) {
        isSigned = other.isSigned;
        target = other.target;
    }
    return *this;
}
AForm::~AForm() {}
std::string AForm::getName() const { return name; }
bool AForm::getIsSigned() const { return isSigned; }
int AForm::getSignGrade() const { return signGrade; }
int AForm::getExecGrade() const { return execGrade; }
std::string AForm::getTarget() const { return target; }
void AForm::beSigned(const Bureaucrat& b) {
    if (b.getGrade() > signGrade)
        throw GradeTooLowException();
    isSigned = true;
}
const char* AForm::GradeTooHighException::what() const throw() { return "AForm grade too high"; }
const char* AForm::GradeTooLowException::what() const throw() { return "AForm grade too low"; }
const char* AForm::NotSignedException::what() const throw() { return "AForm not signed"; }
std::ostream& operator<<(std::ostream& os, const AForm& f) {
    os << f.getName() << ", signed: " << (f.getIsSigned() ? "yes" : "no")
       << ", sign grade: " << f.getSignGrade() << ", exec grade: " << f.getExecGrade()
       << ", target: " << f.getTarget() << ".";
    return os;
}
