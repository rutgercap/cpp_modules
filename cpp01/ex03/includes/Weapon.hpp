#ifndef WEAPON
# define WEAPON

# include <string>
using	std::string;


class Weapon {
	private:
		string _type;

	public:
		Weapon(string type);
		const string&	getType(void);
		void    		setType(string type);
};

#endif
