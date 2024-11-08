
#include "../includes/Animal.hpp"

Animal::Animal(void) : _type("Unknown") {
	std::cout << "Animal Constructor called\n";
}

Animal::Animal(const std::string& type) : _type(type) {
	std::cout << "Animal Constructor called\n";
}

Animal::Animal(const Animal& animal) : _type(animal._type) {
	std::cout << "Animal Constructor called\n";
}

Animal& Animal::operator=(const Animal& animal) {
	if (this != &animal)
		_type = animal._type;
	
	return *this;
}

void Animal::makeSound(void) const {
	std::cout << "Undefined sound\n";
}

std::string Animal::getType(void) const {
	return _type;
}

Animal::~Animal(void) {
	std::cout << "Animal Destructor called\n";
}

WrongAnimal::WrongAnimal(void) : _type("Undefined") {
	std::cout << "Wrong Animal Constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type) {
	std::cout << "Wrong Animal Constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& wa) : _type(wa._type) {
	std::cout << "Wrong Animal Constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wa) {
	if (this != &wa) 
		_type = wa._type;
	
	return *this;
}

std::string WrongAnimal::getType(void) const {
	return _type;
}

void WrongAnimal::makeSound() const {
	std::cout << "Barau\n";
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Wrong Animal Destructor called\n";
}
