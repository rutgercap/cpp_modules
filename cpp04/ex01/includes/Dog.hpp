#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <Animal.hpp>
# include <Brain.hpp>

class Dog: public Animal {
	public:
		Dog();
		Dog(const Dog &to_copy);
		~Dog();

		void	makeSound() const;
	
	private:
		Brain   *_brain;
};

#endif
