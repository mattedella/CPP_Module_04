
#include "../includes/Animal.hpp"

A_Animal::A_Animal(void) : _type("Unknown") {
	std::cout << "A_Animal Constructor called\n";
}

A_Animal::A_Animal(const std::string& type) : _type(type) {
	std::cout << "A_Animal Constructor called\n";
}

A_Animal::A_Animal(const A_Animal& animal) : _type(animal._type) {
	std::cout << "A_Animal Constructor called\n";
}

A_Animal& A_Animal::operator=(const A_Animal& animal) {
	if (this != &animal)
		_type = animal._type;
	
	return *this;
}

void A_Animal::makeSound(void) const {
	std::cout << "Undefined sound\n";
}

std::string A_Animal::getType(void) const {
	return _type;
}

A_Animal::~A_Animal(void) {
	std::cout << "A_Animal Destructor called\n";
}
