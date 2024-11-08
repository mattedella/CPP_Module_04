
#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal(), _brain(new Brain()) {
	_type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const std::string& type) : Animal(type), _brain(new Brain()) {
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& Dog) : Animal(Dog._type), _brain(new Brain()) {
	std::cout << "Dog constructor called\n";
}

Dog& Dog::operator=(const Dog& Dog) {
	if (this != &Dog)
		_type = Dog._type;

	return *this;
}

void Dog::makeSound(void) const {
	for (int i = 0; i < 100; i++)
		std::cout << _brain->getIdeas(i);
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << "Dog Destructor called\n";
}