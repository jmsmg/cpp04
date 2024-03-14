#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->materia[i] = nullptr;
	}
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
		if (this->materia[i] != nullptr)
		{
			delete this->materia[i];
		}
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *input)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == nullptr)
		{
			this->materia[i] = input->clone();
			break ;
		}
		if (i == 3)
			return ;
	}
	std::cout << "learnMateria function called" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*tmp = nullptr;

	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i]->getType() == type)
		{
			tmp = this->materia[i]->clone();
			break ;
		}
	}
	if (!tmp)
		return (nullptr);
	std::cout << "createMateria function called" << std::endl;
	return (tmp);
}