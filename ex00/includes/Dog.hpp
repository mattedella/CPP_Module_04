
#ifndef DOG
# define DOG

# include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog(void);
		Dog(const std::string& type);
		Dog(const Dog& dog);

		Dog& operator=(const Dog& dog);

		void makeSound(void) const;

		~Dog(void);
};

#endif