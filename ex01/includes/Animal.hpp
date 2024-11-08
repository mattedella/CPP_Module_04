
#ifndef ANIMAL
# define ANIMAL

#include <iostream>

class Animal {

	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(const std::string &type);
		Animal(const Animal& animal);

		Animal& operator=(const Animal& animal);

		virtual void makeSound(void) const;

		std::string getType(void) const;

		virtual ~Animal(void);
};

#endif