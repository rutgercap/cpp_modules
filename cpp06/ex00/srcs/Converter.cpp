#include "converter.hpp"

static void	inputError() {
	std::cerr << "Input must be char, int, float or double" << std::endl;
}

bool	isScienceStuff() {

}

static void	convertFloat(double dValue) {

}

static void	convertDouble(double dValue) {

}

static void convertInt(int intValue) {
}

void	convertInput(const char *input) {
	char	*pEnd;
	double	doubleValue;
	int		intValue;

	if (strlen(input) == 1 && isprint(*input) && !isdigit(*input)) {
		// convert char
		return;
	}
	doubleValue = strtod(input, &pEnd);
	if (*pEnd == '\0'){
		if (intValue == 0L && pEnd == input)
			inputError();
		convertInt(intValue);
		return ;
	}
	if (*pEnd == 'f' && !*(pEnd + 1))
		convertFloat(doubleValue);
	else if (*pEnd == '\0')
		convertDouble(doubleValue);
	else
		inputError();
}
