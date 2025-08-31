#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>
class Bureaucrat;

class AForm {
private:
    const std::string name;
    bool isSigned;
    const int signGrade;
    const int execGrade;
    std::string target;
public:
    AForm(const std::string& name, int signGrade, int execGrade, const std::string& target = "");
    AForm(const AForm& other);
    AForm& operator=(const AForm& other);
    virtual ~AForm();

    std::string getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExecGrade() const;
    std::string getTarget() const;

    void beSigned(const Bureaucrat& b);
    virtual void execute(Bureaucrat const& executor) const = 0;

    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };
    class NotSignedException : public std::exception {
    public:
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif
