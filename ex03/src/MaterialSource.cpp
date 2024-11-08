
#include "../includes/AMateria.hpp"

IMateriaSource::~IMateriaSource(void) {

}

MateriaSource::MateriaSource(void) {
	for (int i  = 0; i < 4; i++)
		_knowledge[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& ms) {
	for (int i  = 0; i < 4; i++)
		_knowledge[i] = ms._knowledge[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ms) {
	if (this != &ms)
		for (int i = 0; i < 4; i++)
			_knowledge[i]= ms._knowledge[i];
	
	return *this;
}

void MateriaSource::learnMateria(AMateria* amat) {
	for (int i = 0; i < 4; i++)
		if (_knowledge[i] == NULL) {
			_knowledge[i] = amat;
			return ;
		}
	
	std::cout << "Cannot learn more Materia\n";
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < 4; i++) {
		if (_knowledge[i]->getType() == type)
			return _knowledge[i];
	}

	return 0;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		if (_knowledge[i])
			delete _knowledge[i];
}