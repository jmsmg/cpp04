#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class	Cure : public AMateria
{ 
	public:
		Cure();
		Cure(const Cure &input);
		Cure &operator=(const Cure &input);
		~Cure();

		std::string const	&getType() const;
		AMateria			*clone() const;
		void				use(ICharacter &target);
};

#endif