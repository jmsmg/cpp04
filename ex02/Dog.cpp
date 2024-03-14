#include "Dog.hpp"

Dog::Dog()
{
	this->brain = new Brain();

	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	this->type = dog.type;
	this->brain = dog.brain;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		std::cout << "Dog copy assignment operator called" << std::endl;
		this->type = dog.type;
		this->brain = dog.brain;
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;

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

void	Dog::setBrain(Brain &brain)
{
	this->brain = &brain;
}

Brain	&Dog::getBrain() const
{
	return (*(this->brain));
}

void	Dog::makeSound() const
{
	std::cout << "Dog makesound" << std::endl;
}