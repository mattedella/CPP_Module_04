
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

int main(void) {

	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* t = new WrongCat();

	std::cout << i->getType() << " " <<std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << t->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	t->makeSound();

	delete t;
	delete k;
	delete j;
	delete i;
	delete meta;


	return 0;
}