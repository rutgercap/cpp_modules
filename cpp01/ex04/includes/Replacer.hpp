#ifndef REPLACER_H
# define REPLACER_H

# include <fstream>
# include <iostream>
# include <string>

using std::string;

class Replacer {
	private:
		const string	_filepath;
		string			_filename;
		const string	_s1;
		const string	_s2;
		std::ifstream	_infile;
		std::ofstream	_outfile;

		string			_replacePiece(string line, int i);
		void			_findInLine(string line);
		void			_writeLine(string line);

	public:
		Replacer(string filepath, string s1, string s2);
		int		openInFile(void);
		int		openOutFile(void);
		void	replaceText(void);
};

#endif
