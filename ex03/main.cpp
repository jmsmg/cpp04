#include "./Character/Character.hpp"
#include "./MateriaSource/MateriaSource.hpp"
#include "./Materia/Cure.hpp"
#include "./Materia/Ice.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "----Materia constructor test----" << std::endl;
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;
	std::cout << "-----Ice LearnMateria test------" << std::endl;
	src->learnMateria(new Ice());

	std::cout << std::endl;
	std::cout << "-----Cure LearnMateria test-----" << std::endl;
	src->learnMateria(new Cure());

	std::cout << std::endl;
	std::cout << "---Character constructor test---" << std::endl;
	ICharacter* me = new Character("me");

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "----createMateria, equip test---" << std::endl;
	std::cout << "-------------ice----------------" << std::endl;
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << std::endl;
	std::cout << "------------cure----------------" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl;
	std::cout << "---Character constructor test---" << std::endl;

	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	std::cout << "----------use test--------------" << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "---------all destructor---------" << std::endl;
	std::cout << "--------------bob---------------" << std::endl;
	delete bob;
	std::cout << "--------------me----------------" << std::endl;
	me->unequip(0);
	me->unequip(1);
	delete me;
	std::cout << "--------------src----------------" << std::endl;
	delete src;
	while (1){}
	return 0;
}