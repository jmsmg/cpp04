#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &cat);
		WrongCat &operator=(const WrongCat &cat);
		~WrongCat();
		std::string		getType() const;
		void			setType(const std::string str);
		void			makeSound() const;
};

#endif