#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &animal);
		Cat &operator=(const Cat &animal);
		~Cat();
		std::string		getType() const;
		void			setType(const std::string str);
		void			makeSound() const;
};


#endif