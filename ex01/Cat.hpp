#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain	*brain;

	public:
		Cat();
		Cat(const Cat &animal);
		Cat &operator=(const Cat &animal);
		~Cat();
		std::string		getType() const;
		void			setType(const std::string str);
		Brain			&getBrain() const;
		void			setBrain(Brain &brain);
		void			makeSound() const;

};


#endif