#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	this->type = wronganimal.type;
	std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	if (this != &wronganimal)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->type = wronganimal.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
	std::cout << "excute getType" << std::endl;
}

void	WrongAnimal::setType(const std::string str)
{
	this->type = str;
	std::cout << "excute setType" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "wronganimal makesound" << std::endl;
}