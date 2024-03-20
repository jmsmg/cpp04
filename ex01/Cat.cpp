#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->flag = 1;
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	Brain *tmp = new Brain();

	tmp->setIdeas(cat.getBrain().getIdeas());

	std::cout << this->brain->getIdeas() << std::endl;
	if (flag == 1)
	{
		flag = 0;
		delete this->brain;
	}
	this->brain = tmp;
	std::cout << "hihi" << std::endl;
	this->type = cat.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		Brain *tmp = new Brain();

		tmp->setIdeas(cat.getBrain().getIdeas());
		if (flag == 1)
		{
			flag = 0;
			delete this->brain;
		}
		this->brain = tmp;	
		this->type = cat.type;
		std::cout << "cat copy assignment operator called" << std::endl;
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
	std::cout << "Cat getType called" << std::endl;
	return (this->type);
}

void	Cat::setType(const std::string str)
{
	this->type = str;
	std::cout << "Cat setType called" << std::endl;
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