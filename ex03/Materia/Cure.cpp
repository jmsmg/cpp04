#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &input)
{
	this->type = input.type;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &input)
{
	if (this != &input)
	{
		std::cout << "Cure copy assignment operator called" << std::endl;
		this->type = input.type;
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

std::string	const &Cure::getType() const
{
	std::cout << "Cure getType called" << std::endl;
	return (this->type);
}

AMateria	*Cure::clone() const
{
	Cure	*tmp = new Cure();

	tmp->type = this->type;

	std::cout << "Cure clone function called" << std::endl;
	return (tmp);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}