
#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria("cure") {

}

Cure::Cure(const Cure& ice) : AMateria(ice._type) {

}

Cure& Cure::operator=(const Cure& cure) {
	if (this != &cure)
		_type = cure._type;
	
	return *this;
}

Cure* Cure::clone() const {
	Cure* newCure = new Cure(*this);

	return newCure;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::~Cure() {
}