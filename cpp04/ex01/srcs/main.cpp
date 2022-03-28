#include <Cat.hpp>
#include <Dog.hpp>
#include <iostream>

int main(void) {
	const Animal* j = new Dog();
    const Animal* i = new Cat();

	delete j;
    delete i;
	system("leaks poly");
}
