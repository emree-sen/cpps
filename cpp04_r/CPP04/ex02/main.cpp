#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *a = new Cat;
    std::cout << "***********" << std::endl;
    Animal *b = new Dog;
    std::cout << "***********" << std::endl;

    a->makeSound();
    b->makeSound();

    std::cout << "***********" << std::endl;
    delete a;
    std::cout << "***********" << std::endl;
    delete b;

	return 0;
}