
#include "../includes/Brain.hpp"

Brain::Brain(void) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = "I have a brain\n";
	
	std::cout << "Brain Constructor called\n";
}

Brain::Brain(const std::string& idea) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
	
	std::cout << "Brain Constructor called\n";
}

Brain::Brain(const Brain& br) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = br._ideas[i];
	
	std::cout << "Brain Copy Constructor called\n";
}

Brain& Brain::operator=(const Brain& br) {
	if (this != &br)
		for (int i = 0; i < 100; i++) 
		_ideas[i] = br._ideas[i];

	return *this;
}

std::string Brain::getIdeas(int i) const {
	return _ideas[i];
}

Brain::~Brain(void) {
	std::cout << "Brain Destructor called\n";
}