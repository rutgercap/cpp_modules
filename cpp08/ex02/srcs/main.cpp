#include "../includes/MutantStack.hpp"
#include <iostream>

void	stackTest() {
	std::stack<int>	stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
}

int main(void) {
	MutantStack<int>	stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);

	// Normal
	MutantStack<int>::iterator iterator = stack.begin();
	iterator++;
	std::cout << *iterator << std::endl;
	iterator++;
	std::cout << *iterator << std::endl;
	iterator = stack.end();
	iterator--;
	std::cout << *iterator << std::endl;
	iterator--;
	std::cout << *iterator << std::endl;
	// Reverse
	std::cout << "----- Reverse -----" << std::endl;
	MutantStack<int>::reverseIterator reverseIterator = stack.rbegin();
	reverseIterator++;
	std::cout << *reverseIterator << std::endl;
	reverseIterator++;
	std::cout << *reverseIterator << std::endl;
	reverseIterator = stack.rend();
	reverseIterator--;
	std::cout << *reverseIterator << std::endl;
	reverseIterator--;
	std::cout << *reverseIterator << std::endl;
}
