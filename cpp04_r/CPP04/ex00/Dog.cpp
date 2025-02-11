#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog created" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog copy assigment operator called" << std::endl;
    this->type = copy.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "hav hav" << std::endl;
}