
#ifndef CAT
# define CAT

#include "Animal.hpp"

class Cat : public Animal {

	public:
		Cat(void);
		Cat(const std::string& type);
		Cat(const Cat& cat);

		Cat& operator=(const Cat& cat);

		void makeSound() const;

		~Cat(void);
};

class WrongCat : public WrongAnimal {

	public:
		WrongCat(void);
		WrongCat(const std::string& type);
		WrongCat(const WrongCat& cat);

		WrongCat& operator=(const WrongCat& cat);

		void makeSound() const;

		~WrongCat(void);
};

#endif
