#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal	*meta = new Animal;
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "---- delete Animal----" << std::endl;
	delete meta;
	std::cout << "---- delete Dog----" << std::endl;
	delete i;
	std::cout << "---- delete Cat----" << std::endl;
	delete j;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "---- new WrongAnimal ----" << std::endl;
	const WrongAnimal	*wronganimal = new WrongAnimal();
	std::cout << "---- new WrongCat ----" << std::endl;
	const WrongAnimal	*wrongcat = new WrongCat();

	std::cout << wronganimal->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;

	wronganimal->makeSound();
	wrongcat->makeSound();

	std::cout << "----delete WrongAnimal----" << std::endl;
	delete wronganimal;
	std::cout << "----delete WrongCat----" << std::endl;
	delete wrongcat;
}