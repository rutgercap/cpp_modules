#include <Cat.hpp>
#include <Dog.hpp>
#include <iostream>

void	standardTests() {
	std::cout << "----- Subject test: -----" << std::endl;
	const Animal* j = new Dog();
    const Animal* i = new Cat();

	delete j;
    delete i;
	std::cout << std::endl << std::endl << std::endl;
}

void	loopTest() {
	std::cout << "----- Loop test: -----" << std::endl;
	Animal	*array[3];

	for (int i = 0; i < 3; i++) {
		std::cout << "Creating animal " << i << ":" << std::endl;
		if (i % 2) {
			array[i] = new Dog();
		} else {
			array[i] = new Cat();
		}
	}

	for (int i = 0; i < 3; i++) {
		std::cout << "Deleting animal " << i << ":" << std::endl;
		delete(array[i]);
	}
	std::cout << std::endl << std::endl << std::endl;
}

void	copyTest() {
	std::cout << "----- Copy test: -----" << std::endl;
	Animal*	first = new Dog();
	Animal*	second = new Dog();

	first->getBrain()->setIdea(0, "Woof");
	second = first;
	first->getBrain()->setIdea(0, "Stop Woof");
	std::cout << "First idea: " << first->getBrain()->getIdea(0) << std::endl;
	std::cout << "Second idea: " << second->getBrain()->getIdea(0) << std::endl;

	delete(first);
	delete(second);
}

int main(void) {
	standardTests();
	loopTest();
	copyTest();
	// system("leaks poly");
}
