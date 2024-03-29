#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &input)
{
	for (int i = 0; i < 4; i++)
	{
		this->materia[i] = input.materia[i]->clone();
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &input)
{
	for (int i = 0; i < 4; i++)
	{
		this->materia[i] = input.materia[i]->clone();
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << i << std::endl;
		if (this->materia[i])
		{
			delete this->materia[i];
		}
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *input)
{
	std::cout << "learnMateria function called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (!(this->materia[i]))
		{
			this->materia[i] = input;
			break ;
		}
		if (i == 3)
			return ;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	if (type != "cure" && type != "ice")
		return (0);

	AMateria	*tmp = NULL;

	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i]->getType() == type)
		{
			tmp = this->materia[i];
			break ;
		}
	}
	std::cout << "createMateria function called" << std::endl;
	return (tmp);
}