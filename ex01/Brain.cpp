#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = brain.ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = brain.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

std::string	*Brain::getIdeas()
{
	return (this->ideas);
}

void	Brain::setIdeas(std::string *ideas)
{
	std::cout << "Brain setIdeas function called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = ideas[i];
	}
}

void	Brain::inputIdea(const std::string idea)
{
	int i = 0;
	std::cout << "Brain inputIdea called" << std::endl;
	while (i < 100)
	{
		if (ideas[i] == "")
		{
			ideas[i] = idea;
			break ;
		}
		i++;
	}
	if (i == 100)
	{
		std::cout << "Brain is full" << std::endl;
	}
}