#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class	Brain
{
	private:
		std::string	*ideas;

	public:
		Brain();
		Brain(const Brain &brain);
		Brain &operator=(const Brain &brain);
		~Brain();
		std::string	*getIdeas();
		void		setIdeas(std::string *ideas);
		void		inputIdea(const std::string idea);
};

#endif