#include "Replacer.hpp"
#include <iostream>
#include <fstream>

int	input_check(std::string s1, std::string s2) {
	if (s1.length() == 0 || s2.length() == 0) {
		std::cout << "Strings cannot be empty" << std::endl;
		return 1;
	}
	return 0;
}

int	replace(std::string filepath, std::string s1, std::string s2) {
	Replacer	replacer(filepath, s1, s2);

	if (replacer.openInFile() || replacer.openOutFile())
		return 1;
	replacer.replaceText();
	return 0;
}

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Usage: ./replace <string_1> <string_2>" << std::endl;
		return 1;
	}
	if (input_check(argv[2], argv[3]))
		return 1;
	if (replace(argv[1], argv[2], argv[3]))
		return 1;
	return 0;
}
