/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:12:41 by rgilles           #+#    #+#             */
/*   Updated: 2021/11/01 14:41:15 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>
#include <Ice.hpp>
#include <MateriaSource.hpp>
#include <Character.hpp>

static void	test_materiaSource(void)
{
	std::cout << "---- TEST #00 ---- MateriaSource" << std::endl << std::endl;

	MateriaSource*	src = new MateriaSource();
	AMateria*		foundMateria;

	std::cout << std::endl << "  1. Source learn 4 Ice Materias" << std::endl << std::endl;

	for ( int i = 0; i < 4; i++ )
	{
		std::cout << "- " << i << " ";
		src->learnMateria( new Ice() );
	}

	std::cout << std::endl << "  2. Try to learn a new source if MateriaSource is full" << std::endl << std::endl;

	foundMateria = new Ice();

	std::cout << std::endl;

	std::cout << "- 4? Nothing should print here : " << std::endl;
	src->learnMateria( foundMateria );

	std::cout << std::endl;
	delete foundMateria;

	std::cout << std::endl;

	std::cout << std::endl;
	delete src;
}

static void	test_materia(void)
{
	std::cout << std::endl << "---- TEST #01 ---- Using Materias" << std::endl << std::endl;

	ICharacter*		me = new Character("me");
	ICharacter*		bob = new Character("bob");

	IMateriaSource*	src = new MateriaSource();
	AMateria*		tmp;

	std::cout << std::endl << "  1. Source learn Ice and Cure Materias" << std::endl << std::endl;

	src->learnMateria( new Ice() );
	std::cout << std::endl;
	src->learnMateria( new Cure() );

	std::cout << std::endl << "  2. Create Ice Materia and equip me" << std::endl << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << std::endl << "  3. Create Cure Materia and equip me" << std::endl << std::endl;

	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl << "  4. I attack bob then heal him" << std::endl << std::endl;

	me->use(0, *bob); // * shoots an ice bolt at bob *
	me->use(1, *bob); // * heals bob’s wounds *

	std::cout << std::endl << "  5. I unequip and equip back a materia" << std::endl << std::endl;

	tmp = me->getMateria(0);
	me->unequip(0);
	me->equip(tmp);

	std::cout << std::endl << "  6. I try to use and unequip a non-existant materia" << std::endl << std::endl;

	std::cout << "Nothing should print here: ";
	me->use(3, *bob);

	std::cout << std::endl << "Nothing should print here: ";
	me->unequip(3);

	std::cout << std::endl;
	std::cout << std::endl << "  7. I fill up my inventory and try to equip new materia" << std::endl << std::endl;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;
	tmp = src->createMateria("cure");
	std::cout << "There goes the new one, nothing should print here:";
	me->equip(tmp);

	std::cout << std::endl << std::endl;

	delete tmp;
	delete bob;
	delete me;
	delete src;
}

static void	test_character(void)
{
	std::cout << std::endl << "---- TEST #02 ---- Copy a character" << std::endl << std::endl;

	Character*		cloud = new Character("Cloud");
	MateriaSource*	src = new MateriaSource();

	std::cout << std::endl << "  1. Source learn Ice and Cure Materias" << std::endl << std::endl;

	src->learnMateria( new Ice() );
	std::cout << std::endl;
	src->learnMateria(new Cure());

	std::cout << std::endl << "  2. Equip Cloud only with Cure Materia" << std::endl << std::endl;

	for (int i = 0; i < 4; i++)
		cloud->equip(src->createMateria("cure"));

	std::cout << std::endl << "  3. Create a copy of Cloud -> Tifa" << std::endl << std::endl;

	Character*	tifa = new Character(*cloud);
	
	std::cout << std::endl << "  4. Unequip Cloud of cure Materia at index 0" << std::endl << std::endl;

	AMateria*	backup = cloud->getMateria(0);
	cloud->unequip(0);
	delete backup;

	std::cout << std::endl << "  5. Equip Cloud back with a new Ice Materia" << std::endl << std::endl;

	cloud->equip(src->createMateria("ice"));

	std::cout << std::endl << "  6. Tifa should have an unmodified inventory (only Cure Materias)" << std::endl << std::endl;
	for (int i = 0; i < 4; i++)
		tifa->use(i, *cloud);

	std::cout << std::endl;

	delete cloud;
	std::cout << std::endl;
	delete tifa;
	std::cout << std::endl;
	delete src;
}

int	main(void)
{
	test_materiaSource();
	test_materia();
	test_character();
	return (0);
}
