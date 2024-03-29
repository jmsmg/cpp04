#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	this->type = animal.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	if (this != &animal)
	{
		std::cout << "Animal copy assignment operator called" << std::endl;
		this->type = animal.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	std::cout << "excute getType" << std::endl;
	return (this->type);
}

void	Animal::setType(const std::string str)
{
	this->type = str;
	std::cout << "excute setType" << std::endl;
}