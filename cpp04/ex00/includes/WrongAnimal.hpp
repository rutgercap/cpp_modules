#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <string>

class WrongAnimal {
    public:
        WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &wrong);
        WrongAnimal();
        ~WrongAnimal();
        
		WrongAnimal &operator=(const WrongAnimal &wrong);

        void makeSound() const;
        std::string const getType() const;

    protected:
        std::string const   _type;
};

#endif
