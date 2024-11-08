
#include "../includes/Ice.hpp"

Ice::Ice(void) : AMateria("ice") {

}

Ice::Ice(const Ice& ice) : AMateria(ice._type) {

}

Ice& Ice::operator=(const Ice& ice) {
	if (this != &ice)
		_type = ice._type;
	
	return *this;
}

Ice* Ice::clone() const {
	Ice* newIce = new Ice(*this);

	return newIce;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice() {
}