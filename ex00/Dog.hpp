#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &animal);
		Dog &operator=(const Dog &dog);
		~Dog();
		std::string		getType() const;
		void			setType(const std::string str);
		void			makeSound() const;
};


#endif