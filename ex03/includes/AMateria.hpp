
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

	protected:
		std::string _type;

	public:
		AMateria(void);
		AMateria(const std::string& type);
		AMateria(const AMateria& mat);

		AMateria& operator=(const AMateria& mat);

		std::string const& getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		virtual ~AMateria(void);

};

class IMateriaSource {

	public:

		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(const std::string& type) = 0;
		
		virtual ~IMateriaSource(void);
};

class MateriaSource : public IMateriaSource {

	private:
		AMateria* _knowledge[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& ms);

		MateriaSource& operator=(const MateriaSource& ms);

		void learnMateria(AMateria* amat);
		AMateria* createMateria(const std::string& type);

		~MateriaSource(void);
};

#endif