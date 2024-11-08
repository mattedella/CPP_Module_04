
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

int main(void) {

	const Animal* i = new Cat();
	const Animal* j = new Dog();

	delete j;
	delete i;

	return 0;
}