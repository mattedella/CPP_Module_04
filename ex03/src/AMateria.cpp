
#include "../includes/AMateria.hpp"

AMateria::AMateria(void) : _type("unkown") {
	std::cout << "AMateria Constructor called\n";
}

AMateria::AMateria(const std::string& type) : _type(type) {
	std::cout << "AMateria Constructor called\n";
}

AMateria::AMateria(const AMateria& mat) : _type(mat._type) {
	std::cout << "AMateria Copy Constructor called\n";
}

AMateria& AMateria::operator=(const AMateria& mat) {
	if (this != &mat)
		_type = mat._type;
	
	return *this;
}

std::string const& AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "nulla\n" << target.getName();
}

AMateria::~AMateria(void) {
	std::cout << "AMateria Copy Constructor called\n";
}