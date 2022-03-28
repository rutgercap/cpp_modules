#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <string>
# include <WrongAnimal.hpp>

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();

	std::string getType() const;
	void        makeSound() const;
};

#endif
