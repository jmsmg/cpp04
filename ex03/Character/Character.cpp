#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(Character const &input)
{
	this->name = input.name;
	for (int i = 0; i < 4; i++)
	{
		this->materia[i] = input.materia[i];
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character	&Character::operator=(const Character &input)
{
	if (this != &input)
	{
		std::cout << "Character copy assignment operator called" << std::endl;
		this->name = input.getName();
		for (int i = 0; i < 4; i++)
		{
			this->materia[i] = input.materia[i];
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

std::string	const &Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	
}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, Character &target)
{

}
