#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "*************************************37*************************************"<< std::endl;
    
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    std::cout << "*************************************37*************************************"<< std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "*************************************37*************************************"<< std::endl;
    
    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* wrongi = new WrongCat();

    std::cout << "*************************************37*************************************"<< std::endl;


    std::cout << wrongi->getType() << " " << std::endl;
    std::cout << wrongmeta->getType() << " " << std::endl;

    std::cout << "*************************************37*************************************"<< std::endl;

    wrongmeta->makeSound();
    wrongi->makeSound();

    std::cout << "*************************************37*************************************"<< std::endl;

    delete wrongi;
    delete i;
    delete j;
    delete meta;
}