
#ifndef DOG
# define DOG

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain* _brain;

	public:
		Dog(void);
		Dog(const std::string& type);
		Dog(const Dog& dog);

		Dog& operator=(const Dog& dog);

		void makeSound(void) const;

		~Dog(void);
};

#endif