#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("Alice", 2);
		std::cout << a << std::endl;
		a.incrementGrade(); // becomes 1
		std::cout << a << std::endl;
		// Next should throw
		a.incrementGrade();
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat b("Bob", 149);
		std::cout << b << std::endl;
		b.decrementGrade(); // becomes 150
		std::cout << b << std::endl;
		b.decrementGrade(); // throws
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat c("Charlie", 0); // invalid, throws
		std::cout << c << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat d("Dave", 151); // invalid, throws
		std::cout << d << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
