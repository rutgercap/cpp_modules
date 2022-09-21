#include "../includes/converter.hpp"

static void	inputError() {
	std::cerr << "\nInput Error: must be of type char, int, float or double.\n" << std::endl;
	exit(EXIT_FAILURE);
}

static bool	isInfiniteOrNan(double value) {
	if (isinf(value) || isnan(value) || value > INT_MAX || value < INT_MIN){
		std::cout << "char: not printable" <<  std::endl;
		std::cout << "int: not printable" <<  std::endl;
		return true;
	}
	return false;
}

static void	printChar(const double c) {
	if (isprint(static_cast<char>(c))) {
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	} else {
		std::cout << "char: not printable" << std::endl;
	}
}

static void	convertChar(const char c) {
	std::cout << "Converting char:" << std::endl;
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed;
	std::cout << "float: " << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

static void	convertInt(const long i) {
	if (i > INT_MAX || i < INT_MIN) {
		std::cerr << "Not a valid integer" << std::endl;
		exit(1);
	}
	std::cout << "Converting char:" << std::endl;
	printChar(i);
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << std::fixed;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

static void	convertFloat(const double f) {
	if ((f > FLT_MAX || f < FLT_MIN) && !isinf(f)){
		std::cerr << "Input error: not a valid float\n";
		return ;
	}
	std::cout << std::showpoint;
	std::cout << "Converting float:" << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
	if (isInfiniteOrNan(f)) {
		return ;
	}
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	printChar(f);
}

static void printNaN() {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

static void printInf(char minus) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << minus << "inf" << std::endl;
	std::cout << "double: " << minus << "inf" << std::endl;
}

static void	convertDouble(const double d) {
	std::cout << "Converting double:" << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
	if (isInfiniteOrNan(d)) {
		return ;
	}
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	printChar(d);
}

// Horrible but works
static int inputCheck(std::string input) {
	int len = input.length();
	bool	foundDot = false;
	bool	foundF = false;

	for (int i = 0; i < len; i++) {
		if (!isnumber(input[i])) {
			if (input[i] == '.') {
				if (foundDot == true) {
					return 1;
				} else {
					foundDot = true;
				}
			}
			if (input[i] == 'f') {
				if (foundF == true) {
					return 1;
				} else {
					foundF = true;
				}
			}
		}
	}
	return 0;
}

// TODO: fix floats
void	scalarConversion(std::string input) {
	std::string::size_type sz;
	double	doubleValue;
	long	intValue;

	if (!input.compare("nan") || !input.compare("nanf")) {
		return printNaN();
	} else if (!input.compare("-inf") || !input.compare("+inf") ){
		return printInf(input[0]);
	}
	if (inputCheck(input)) {
		return inputError();
	}
	if (input.length() == 1 && isprint(input[0]) && !isdigit(input[0])){
		convertChar(input[0]);
		return ;
	}
	intValue = stol(input, &sz);
	if(input[sz] == '\0'){
		if (intValue == 0L && sz == 0)
			inputError();
		convertInt(intValue);
		return ;
	}
	doubleValue = stod(input, &sz);
	if (input[sz] == 'f' && input[sz + 1] == '\0')
		convertFloat(doubleValue);
	else if (input[sz] == '\0')
		convertDouble(doubleValue);
	else
		inputError();
}
