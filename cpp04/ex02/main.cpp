#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main(void)
{
	// Não compila porque AAnimal não pode ser instanciada
	// AAnimal a;
	// AAnimal* b = new AAnimal();

	std::cout << "=== Teste 2: array de AAnimal* ===" << std::endl;
	const int size = 4;
	AAnimal* animals[size];

	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < size; i++)
		animals[i]->makeSound();

	for (int i = 0; i < size; i++)
		delete animals[i];

	return 0;
}