#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <string>
# include <WrongAnimal.hpp>

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat &wrong);
		~WrongCat();

		WrongCat &operator=(const WrongCat &wrong);

		std::string const getType() const;
		void        makeSound() const;
};

#endif
