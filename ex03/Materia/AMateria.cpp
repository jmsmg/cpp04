#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &input)
{
	this->type = input.type;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &input)
{
	if (this != &input)
	{
		std::cout << "AMateria copy assignment operator called" << std::endl;
		this->type = input.type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string	const &AMateria::getType() const
{
	std::cout << "AMateria getType called" << std::endl;
	return (this->type);
}