
#include "../includes/ICharacter.hpp"

ICharacter::~ICharacter() {}

Character::Character(void) : _name("Edward") {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string& name) : _name(name) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& ch) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = ch._inventory[i];
}

Character& Character::operator=(const Character& ch) {
	if (this != &ch)
		for(int i = 0; i < 4; i++)
			_inventory[i] = ch._inventory[i];
	
	return *this;
}

const std::string& Character::getName() const {
	return _name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
		if (!_inventory[i]) {
			_inventory[i] = m;
			return ;
		}
	
	std::cout << "Inventory full\n";
}

void Character::unequip(int idx) {
	if (_inventory[idx])
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	_inventory[idx]->use(target);
}

Character::~Character(void) {

}