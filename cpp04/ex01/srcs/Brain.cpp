#include <Brain.hpp>
#include <iostream>

/*
	Constructors and destructors
*/
Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &brain) {
	std::cout << "Brain copy constructor called" << std::endl;
	copyIdeas(brain);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

/*
	Operators
*/
Brain &Brain::operator=(const Brain &brain) {
	std::cout << "copy operator called" << std::endl;
	if (this != &brain) {
		copyIdeas(brain);
	}
	return *this;
}

/*
	Getters and setters
*/
std::string const *Brain::getIdeas() const {
	return _ideas;
}

std::string const Brain::getIdea(const int index) const {
	return _ideas[index];
}

void	Brain::setIdea(const int index, std::string idea) {
	if (index < 0 || index >= 100) {
		return ;
	}
	_ideas[index].clear();
	_ideas[index] = idea;
}

/*
	Other functions
*/
void	Brain::copyIdeas(const Brain &brain) {
	for (int i = 0; i < 100; i++) {
		setIdea(i, brain.getIdea(i));
	}
}
