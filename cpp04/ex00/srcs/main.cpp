#include <Cat.hpp>
#include <WrongCat.hpp>
#include <Dog.hpp>
#include <iostream>

int main(void) {
    std::cout << "----- Good: -----" << std::endl;
	
	const Animal* meta  = new Animal();
    const Animal* doggo	= new Dog();
    const Animal* kitty	= new Cat();
	
	
	std::cout << doggo->getType() << " " << std::endl;
	std::cout << kitty->getType() << " " << std::endl;
	kitty->makeSound(); //will output the cat sound!
	doggo->makeSound();
	meta->makeSound();

	std::cout << "----- Bad: -----" << std::endl;
	const WrongAnimal* wrongMeta	= new WrongAnimal();
	const WrongAnimal* wrongKitty	= new WrongCat();

	std::cout << wrongKitty->getType() << " " << std::endl;
	std::cout << wrongMeta->getType() << " " << std::endl;
	wrongKitty->makeSound();
	wrongMeta->makeSound();
}
