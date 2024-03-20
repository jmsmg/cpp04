#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	this->type = dog.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		std::cout << "Dog copy assignment operator called" << std::endl;
		this->type = dog.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

std::string	Dog::getType() const
{
	return (this->type);
	std::cout << "Dog excute getType" << std::endl;
}

void	Dog::setType(const std::string str)
{
	this->type = str;
	std::cout << "Dog excute setType" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog makesound" << std::endl;
}