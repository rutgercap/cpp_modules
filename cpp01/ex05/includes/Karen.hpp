#ifndef KAREN_H
# define KAREN_H

# include <string>

class Karen {
	private:
		long	hash(std::string const& str );
		void   	debug(void);
		void 	info(void);
		void   	warning(void);
		void   	error(void);

	public:
		void	complain( std::string level );
};

typedef void (Karen::*KarenMemFnc)(void);

typedef struct s_comp
{
	std::string	key;
	long		lvl_hash;
	KarenMemFnc func;
}				t_comp;

#endif
