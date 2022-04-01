#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <Animal.hpp>
# include <Brain.hpp>

class Cat: public Animal {
	public:
		Cat();
		Cat(Cat const &cat);
		~Cat();

		Cat &operator=(Cat const &cat);
		Animal &operator=(const Animal &animal);

		void makeSound() const;
		Brain	*getBrain() const;

	private:
		Brain   *_brain;
};

#endif
