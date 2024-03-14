#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class	Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual ~Animal();
		virtual std::string		getType() const;
		virtual void			setType(const std::string str);
		virtual void			makeSound() const = 0;
};


#endif