#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		virtual ~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& copy);

		std::string getName() const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade(); 

		// Exceptions
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif