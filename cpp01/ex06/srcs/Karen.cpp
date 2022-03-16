#include "Karen.hpp"
#include <iostream>

e_level	Karen::getLevel(std::string level) {
	
	if (!level.compare("DEBUG")) {
		return DEBUG;
	} else if (!level.compare("INFO")) {
		return INFO;
	} else if (!level.compare("WARNING")) {
		return WARNING;
	} else if (!level.compare("ERROR")) {
		return ERROR;
	} else {
		return OTHER;
	}
}

void	outputLevel(std::string lvl) {
	std::cout << "[ " << lvl << " ]" << std::endl;
	std::cout << std::endl;
}

void	outputMessage(std::string msg) {
	std::cout << msg << std::endl;
	std::cout << std::endl;
}

void	Karen::karenFilter(std::string level) {
	e_level	levelEnum = getLevel(level);
	switch (levelEnum)
	{
	case (DEBUG):
		outputLevel("DEBUG");
		outputMessage(DEBUG_MSG);
	case (INFO):
		outputLevel("INFO");
		outputMessage(INFO_MSG);
	case (WARNING):
		outputLevel("WARNING");
		outputMessage(WARNING_MSG);
	case (ERROR):
		outputLevel("ERROR");
		outputMessage(ERROR_MSG);
		break ;
	default:
		outputMessage(DEFAULT_MSG);
		break;
	}
}
