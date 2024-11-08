
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain {

	protected:
		std::string _ideas[100];

	public:
		Brain(void);
		Brain(const std::string& idea);
		Brain(const Brain& br);

		Brain& operator=(const Brain& br);

		std::string getIdeas(int i) const;

		~Brain(void);

};

#endif