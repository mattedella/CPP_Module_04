
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

int main(void) {

	const A_Animal* i = new Cat();
	const A_Animal* j = new Dog();
	// const A_Animal* k = new A_Animal();

	i->makeSound();

	delete j;
	delete i;

	return 0;
}