#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "Wrongcat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat): WrongAnimal(wrongcat)
{
	this->type = wrongcat.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrongcat)
{
	if (this != &wrongcat)
	{
		std::cout << "WrongCat copy assignment operator called" << std::endl;
		this->type = wrongcat.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

std::string	WrongCat::getType() const
{
	return (this->type);
	std::cout << "excute getType" << std::endl;
}

void	WrongCat::setType(const std::string str)
{
	this->type = str;
	std::cout << "excute setType" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat makesound" << std::endl;
}