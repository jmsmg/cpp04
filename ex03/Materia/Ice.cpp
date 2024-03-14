#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &input)
{
	this->type = input.type;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice &input)
{
	if (this != &input)
	{
		std::cout << "Ice copy assignment operator called" << std::endl;
		this->type = input.type;
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

std::string	const &Ice::getType() const
{
	std::cout << "Ice getType called" << std::endl;
	return (this->type);
}

AMateria	*Ice::clone() const
{
	Ice	*tmp = new Ice();

	tmp->type = this->type;

	std::cout << "Ice clone function called" << std::endl;

	return (tmp);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}