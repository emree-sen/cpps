#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Dog *i = new Dog();
	i->setDogIdea("kemik");

	Dog meta = *i;

	i->printBrainAddress();
	meta.printBrainAddress();

	const int size = 10;
	Animal* animals[size];

	for (int i = 0; i < size / 2; ++i)
	{
		animals[i] = new Dog();
	}
	for (int i = size / 2; i < size; ++i)
	{
		animals[i] = new Cat();
	}

	for (int i = 0; i < size; ++i)
	{
		delete animals[i];
	}

	delete i;
	return 0;
}