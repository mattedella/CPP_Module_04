
#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal(), _brain(new Brain()) {
	_type = "Cat";
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const std::string& type) : Animal(type), _brain(new Brain()) {
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat& cat) : Animal(cat._type), _brain(new Brain()) {
	std::cout << "Cat constructor called\n";
}

Cat& Cat::operator=(const Cat& cat) {
	if (this != &cat)
		_type = cat._type;

	return *this;
}

void Cat::makeSound(void) const {
	for (int i = 0; i < 100; i++)
		std::cout << _brain->getIdeas(i);
}

Cat::~Cat(void) {
	delete _brain;
	std::cout << "Cat Destructor called\n";
}
