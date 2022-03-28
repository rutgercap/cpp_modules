#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {
    public:
        Brain();
        Brain(const Brain &to_copy);
        ~Brain();
        
        std::string *getIdeas() const;

    private:
        std::string _ideas[100];
};

#endif
