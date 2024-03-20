#ifndef	Character_HPP
#define Character_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*materia[4];

	public:
		Character();
		Character(const std::string name);
		Character(Character const &input);
		Character	&operator=(const Character &input);
		~Character();

		std::string const &getName() const;
		void	equip(AMateria* m);
		void	deleteEquip(int idx);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif