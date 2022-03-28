#include <Brain.hpp>
#include <iostream>

Brain::Brain() {
}

Brain::Brain(const Brain &to_copy): _ideas(to_copy.getIdeas().copy()) {
}

Brain::~Brain() {
}

std::string *Brain::getIdeas() const {
	return _ideas;
}