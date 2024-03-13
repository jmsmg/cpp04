#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	this->type = cat.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		std::cout << "Cat copy assignment operator called" << std::endl;
		this->type = cat.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->type);
	std::cout << "Cat excute getType" << std::endl;
}

void	Cat::setType(const std::string str)
{
	this->type = str;
	std::cout << "Cat excute setType" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat makesound" << std::endl;
}