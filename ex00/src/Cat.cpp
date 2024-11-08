
#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal() {
	_type = "Cat";
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const std::string& type) : Animal(type) {
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat& cat) : Animal(cat._type) {
	std::cout << "Cat constructor called\n";
}

Cat& Cat::operator=(const Cat& cat) {
	if (this != &cat)
		_type = cat._type;

	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "Miao Miao\n";
}

Cat::~Cat(void) {
	std::cout << "Cat Destructor called\n";
}

WrongCat::WrongCat(void) : WrongAnimal() {
	_type = "WrongCat";
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const std::string& type) : WrongAnimal(type) {
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat& cat) : WrongAnimal(cat._type) {
	std::cout << "WrongCat constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& cat) {
	if (this != &cat)
		_type = cat._type;

	return *this;
}

void WrongCat::makeSound(void) const {
	std::cout << "Miao Miao\n";
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat Destructor called\n";
}