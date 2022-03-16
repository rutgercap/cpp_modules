#include "Replacer.hpp"

Replacer::Replacer(string filepath, string s1, string s2): \
				_filepath(filepath), _s1(s1), _s2(s2) {
	this->_filename = filepath.append(".replace");
}

int	Replacer::openInFile(void) {
	this->_infile.open(this->_filepath);
	if (!this->_infile.is_open()) {
		std::cout << "Error opening infile" << std::endl;
		return (1);
	}
	return 0;
}

int	Replacer::openOutFile(void) {
	this->_outfile.open(this->_filename);
	if (!this->_outfile.is_open()) {
		std::cout << "Error opening outfile" << std::endl;
		return (1);
	}
	return 0;
}

void	Replacer::_writeLine(string line) {
	_outfile.write(&line[0], line.length());
	_outfile.write("\n", 1);
}

string	Replacer::_replacePiece(string line, int i) {
	string	newLine;

	newLine = line.substr(0, i);
	newLine.append(_s2);
	newLine.append(line.substr(i + _s1.length(), line.length() - i));
	return newLine;
}

void	Replacer::_findInLine(string line) {
	int i = 0;

	while (true) {
		i = line.find(this->_s1, i);
		if (i == std::string::npos) {
			break ;
		}
		line = this->_replacePiece(line, i);
		i += _s2.length();
	}
	this->_writeLine(line);
}

void	Replacer::replaceText(void) {
	string	line;

	while (std::getline(this->_infile, line)) {
		this->_findInLine(line);
	}
}
