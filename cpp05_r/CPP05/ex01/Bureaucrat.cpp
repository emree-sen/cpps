#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150) {}
Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name), grade(copy.grade) {}
Bureaucrat::~Bureaucrat() {}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy) {
    if (this != &copy)
        grade = copy.grade;
    return *this;
}
std::string Bureaucrat::getName() const { return name; }
int Bureaucrat::getGrade() const { return grade; }
void Bureaucrat::incrementGrade() {
    if (grade - 1 < 1)
        throw GradeTooHighException();
    grade--;
}
void Bureaucrat::decrementGrade() {
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}
void Bureaucrat::signForm(Form& f) const {
    try {
        f.beSigned(*this);
        std::cout << name << " signed " << f.getName() << std::endl;
    } catch (std::exception& e) {
        std::cout << name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
    }
}
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat grade too high";
}
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat grade too low";
}
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}
