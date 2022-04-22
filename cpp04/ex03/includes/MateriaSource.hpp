#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <IMateriaSource.hpp>

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &materia);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const &materia);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	
	private:
		AMateria	*_materia[4];

		void	nullMateria();
};

#endif
