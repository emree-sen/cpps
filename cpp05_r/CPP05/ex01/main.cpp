#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Bureaucrat b1("Alice", 10);
    Bureaucrat b2("Bob", 140);
    Form f1("TaxForm", 100, 50);
    Form f2("SecretForm", 5, 5);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;

    b1.signForm(f1); // should sign
    b2.signForm(f1); // should not sign
    b1.signForm(f2); // should not sign

    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;

    return 0;
}
