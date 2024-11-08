
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class A_Animal {

	protected:
		std::string _type;

	public:
		A_Animal(void);
		A_Animal(const std::string &type);
		A_Animal(const A_Animal& animal);

		A_Animal& operator=(const A_Animal& animal);

		virtual void makeSound(void) const = 0;

		std::string getType(void) const;

		virtual ~A_Animal(void);
};

#endif