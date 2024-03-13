#ifndef WrongANIMAL_HPP
#define WrongANIMAL_HPP
#include <string>
#include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &wronganimal);
		WrongAnimal &operator=(const WrongAnimal &wronganimal);
		~WrongAnimal();
		std::string		getType() const;
		void			setType(const std::string str);
		void			makeSound() const;
};


#endif