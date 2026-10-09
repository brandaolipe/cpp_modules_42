#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Teste 1: array de Animals ===" << std::endl;
    const int size = 8;
    Animal* animals[size];

	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
    }

    for (int i = 0; i < size; i++) {
        animals[i]->makeSound();
	}

    for (int i = 0; i < size; i++) {
        delete animals[i];
	}

	Cat	one;
	Cat	two;

	std::cout << "\none brain pointer: " << one.getBrain() << std::endl;
	std::cout << "two brain pointer: " << two.getBrain() << std::endl;

	std::cout << "\nIdeas before change:" << std::endl;
	std::cout << "one ideas[0]: " << one.getBrain()->getIdea(0) << std::endl;
	std::cout << "two ideas[0]: " << two.getBrain()->getIdea(0) << std::endl;

	one.getBrain()->setIdea(0, "run away");
	std::cout << "\nIdeas after change:" << std::endl;
	std::cout << "one ideas[0]: " << one.getBrain()->getIdea(0) << std::endl;
	std::cout << "two ideas[0]: " << two.getBrain()->getIdea(0) << std::endl;

    return 0;
}
