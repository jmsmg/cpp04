#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	Animal	*animal[4];

	std::cout << "------------------------------------" << std::endl;
	std::cout << "------------ test start ------------" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
		{
			std::cout << "------------- make Cat -------------" << std::endl;
			animal[i] = new Cat();
			std::cout << "------------------------------------" << std::endl;
		}
		else
		{
			std::cout << "------------- make Dog -------------" << std::endl;
			animal[i] = new Dog();
			std::cout << "------------------------------------" << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
		{
			std::cout << "------------ delete Cat ------------" << std::endl;
			std::cout << "------------------------------------" << std::endl;
			delete animal[i];
			std::cout << "------------------------------------" << std::endl;
		}
		else
		{
			std::cout << "------------ delete Dog ------------" << std::endl;
			std::cout << "------------------------------------" << std::endl;
			delete animal[i];
			std::cout << "------------------------------------" << std::endl;
		}
	}
	while (1)
	{
		
	}
}