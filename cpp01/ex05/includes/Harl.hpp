#ifndef HARL_H
# define HARL_H

# include <string>

class Harl {
	private:
		long	hash(std::string const& str );
		void   	debug(void);
		void 	info(void);
		void   	warning(void);
		void   	error(void);

	public:
		void	complain( std::string level );
};

typedef void (Harl::*HarlMemFnc)(void);

typedef struct s_comp
{
	std::string	key;
	long		lvl_hash;
	HarlMemFnc func;
}				t_comp;

#endif
