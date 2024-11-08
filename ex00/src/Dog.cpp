
#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal() {
	_type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const std::string& type) : Animal(type) {
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& Dog) : Animal(Dog._type) {
	std::cout << "Dog constructor called\n";
}

Dog& Dog::operator=(const Dog& Dog) {
	if (this != &Dog)
		_type = Dog._type;

	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "Bau Bau\n";
}

Dog::~Dog(void) {
	std::cout << "Dog Destructor called\n";
}