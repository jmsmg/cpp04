#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class ICharacter;

class	Ice : public AMateria
{ 
	public:
		Ice();
		Ice(const Ice &input);
		Ice &operator=(const Ice &input);
		~Ice();

		std::string const	&getType() const;
		AMateria			*clone() const;
		void				use(ICharacter &target);
};

#endif