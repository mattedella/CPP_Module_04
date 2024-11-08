
#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter {

	public:
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

		virtual ~ICharacter();
};

class Character : public ICharacter {

	private:
		std::string	_name;
		AMateria*	_inventory[4];

	public:
		Character(void);
		Character(const std::string& name);
		Character(const Character& ch);

		Character& operator=(const Character& ch);

		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		~Character(void);
};

#endif

