#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->flag = 1;
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog)
{
	Brain *tmp = new Brain();

	tmp->setIdeas(dog.getBrain().getIdeas());

	std::cout << this->brain->getIdeas() << std::endl;
	if (flag == 1)
	{
		flag = 0;
		delete this->brain;
	}
	this->brain = tmp;
	this->type = dog.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		Brain *tmp = new Brain();

		tmp->setIdeas(dog.getBrain().getIdeas());
		if (flag == 1)
		{
			flag = 0;
			delete this->brain;
		}
		this->brain = tmp;	
		this->type = dog.type;
		std::cout << "Dog copy assignment operator called" << std::endl;
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
	std::cout << "Dog getType called" << std::endl;
}

void	Dog::setType(const std::string str)
{
	this->type = str;
	std::cout << "Dog setType called" << std::endl;
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