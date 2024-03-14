#include "Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain();

	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	this->type = cat.type;
	this->brain = cat.brain;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		std::cout << "Cat copy assignment operator called" << std::endl;
		this->type = cat.type;
		this->brain = cat.brain;
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;

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

void	Cat::setBrain(Brain &brain)
{
	this->brain = &brain;
}

Brain	&Cat::getBrain() const
{
	return (*(this->brain));
}

void	Cat::makeSound() const
{
	std::cout << "Cat makesound" << std::endl;
}