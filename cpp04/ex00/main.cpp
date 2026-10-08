#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal*	animal = new Animal();
	const Animal* 	dog = new Dog();
	const Animal*	cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	delete animal;
	delete dog;
	delete cat;

	const WrongAnimal*	wcat = new WrongCat();
	const WrongAnimal*	wanimal = new WrongAnimal();

	wcat->makeSound();
	wanimal->makeSound();

	return (0);
}
