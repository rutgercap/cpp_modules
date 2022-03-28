#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <Animal.hpp>
# include <Brain.hpp>

class Dog: public Animal {
	public:
		Dog();
		~Dog();

		Dog & operator = (const Dog &Dog);

		void	makeSound() const;
		Brain	*getBrain() const;
	
	private:
		Brain   *_brain;
};

#endif
