#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {
    public:
        Brain();
		Brain(Brain const &brain);
        ~Brain();
		
		Brain &operator=(const Brain &Brain);

        std::string const *getIdeas() const;
		std::string const getIdea(const int i) const;
        void	setIdea(const int index, std::string idea);
		void	copyIdeas(const Brain &brain);

    private:
        std::string _ideas[100];
};

#endif
