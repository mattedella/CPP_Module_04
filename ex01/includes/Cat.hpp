
#ifndef CAT
# define CAT

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain* _brain;

	public:
		Cat(void);
		Cat(const std::string& type);
		Cat(const Cat& cat);

		Cat& operator=(const Cat& cat);

		void makeSound() const;

		~Cat(void);
};

#endif
