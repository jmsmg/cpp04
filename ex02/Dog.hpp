#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain	*brain;

	public:
		Dog();
		Dog(const Dog &animal);
		Dog &operator=(const Dog &dog);
		~Dog();
		std::string		getType() const;
		void			setType(const std::string str);
		Brain			&getBrain() const;
		void			setBrain(Brain &brain);
		void			makeSound() const;
};

#endif