#include <string>
#include <iostream>

using std::string;
;
;

int main(void) {
    string	brain = "HI THIS IS BRAIN";
    string	*stringPTR = &brain;
	string	&ref = brain;

	std::cout << "string:     " << brain << std::endl;
	std::cout << "stringptr:  " << stringPTR << std::endl;
	std::cout << "stringref:  " << ref << std::endl;
	std::cout << std::endl;
	std::cout << "stringaddr: " << &brain << std::endl;
	std::cout << "stringptr:  " << stringPTR << std::endl;
	std::cout << "stringref:  " << &ref << std::endl;
}
