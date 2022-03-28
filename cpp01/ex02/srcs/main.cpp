#include <string>
#include <iostream>

int main(void) {
    std::string	brain = "HI THIS IS BRAIN";
    std::string	*stringPTR = &brain;
	std::string	&ref = brain;

	std::cout << "string:     " << brain << std::endl;
	std::cout << "stringptr:  " << stringPTR << std::endl;
	std::cout << "stringref:  " << ref << std::endl;
	std::cout << std::endl;
	std::cout << "stringaddr: " << &brain << std::endl;
	std::cout << "stringptr:  " << stringPTR << std::endl;
	std::cout << "stringref:  " << &ref << std::endl;
}
