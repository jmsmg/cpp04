#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*materia[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &input);
		MateriaSource	&operator=(const MateriaSource &input);
		~MateriaSource();

		void		learnMateria(AMateria *input);
		AMateria	*createMateria(std::string const &type);
};

#endif