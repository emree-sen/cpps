#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat created!" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat copy assigment operator called" << std::endl;
    this->type = copy.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "miyav miyav" << std::endl;
}
