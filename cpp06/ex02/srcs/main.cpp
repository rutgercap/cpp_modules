#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <stdlib.h>
#include <iostream>

Base * generate(void) {
	 srand (time(NULL));
	int		type = rand() % 3;

	switch (type)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	default:
		return new C();
	}
}

void identify(Base* p) {
	A* testA = dynamic_cast<A*>(p);
	if (testA != NULL) {
		std::cout << "It is A" << std::endl;
		return ;
	}
	B* testB = dynamic_cast<B*>(p);
	if (testB != NULL) {
		std::cout << "It is B" << std::endl;
		return ;
	}
	C* testC = dynamic_cast<C*>(p);
	if (testC != NULL) {
		std::cout << "It is C" << std::endl;
		return ;
	}
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Type is A" << std::endl;
		return ;
	} catch (std::bad_cast &bc) {
	}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Type is B" << std::endl;
		return ;
	} catch (std::bad_cast &bc) {
	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Type is C" << std::endl;
		return ;
	} catch (std::bad_cast &bc) {
	}
}

int main(void) {
	Base *toTest = generate();

	identify(toTest);
	identify(*toTest);

	delete toTest;
}
