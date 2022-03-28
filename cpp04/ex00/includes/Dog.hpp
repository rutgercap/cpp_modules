#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <Animal.hpp>

class Dog: public Animal {
    public:
        Dog();
        ~Dog();

		void	makeSound() const;
};

#endif
