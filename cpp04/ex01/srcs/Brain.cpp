#include <Brain.hpp>
#include <iostream>

/*
	Constructors and destructors
*/
Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
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
	if (index >= 100) {
		return ;
	}
	if (_ideas[index].length() != 0) {
		_ideas[index].clear();
	}
	_ideas[index].copy(idea.c_str(), 0, idea.length());
}

/*
	Operators
*/
Brain &Brain::operator=(const Brain &brain) {
	if (this != &brain) {
		copyBrain(brain);
	}
	return *this;
}

/*
	Other functions
*/
void	Brain::copyBrain(const Brain &brain) {
	for (int i = 0; i < 100; i++) {
		setIdea(i, brain.getIdea(i));
	}
}
