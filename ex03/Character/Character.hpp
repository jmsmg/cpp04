#ifndef	Character_HPP
#define Character_HPP

#include "ICharacter.hpp"

class Character
{
	private:
		std::string	name;
		AMateria	*materia[4];

	public:
		Character();
		Character::Character(Character const &input);
		Character	&operator=(const Character &input);
		~Character();

		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);
};

#endif