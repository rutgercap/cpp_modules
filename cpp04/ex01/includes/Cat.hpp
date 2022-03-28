#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <Animal.hpp>
# include <Brain.hpp>

class Cat: public Animal {
	public:
		Cat();
		~Cat();

		void makeSound() const;
			
	private:
		Brain   *_brain;
};

#endif
