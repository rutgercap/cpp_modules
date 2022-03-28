#ifndef REPLACER_H
# define REPLACER_H

# include <fstream>
# include <iostream>
# include <string>

class Replacer {
	private:
		const std::string	_filepath;
		std::string			_filename;
		const std::string	_s1;
		const std::string	_s2;
		std::ifstream	_infile;
		std::ofstream	_outfile;

		std::string			_replacePiece(std::string line, int i);
		void			_findInLine(std::string line);
		void			_writeLine(std::string line);

	public:
		Replacer(std::string filepath, std::string s1, std::string s2);
		int		openInFile(void);
		int		openOutFile(void);
		void	replaceText(void);
};

#endif
