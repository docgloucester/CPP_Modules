/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:18:25 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 14:18:37 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>
#include <Dog.hpp>

int	main()
{
	const Animal* meta = new Animal;
	const Animal* j = new Dog;
	const Animal* i = new Cat;
	std::cout << std::endl;

	std::cout << "I am a " << meta->getType() << " and ";
	meta->makeSound();
	std::cout << "I am a " << j->getType() << " and ";
	j->makeSound();
	std::cout << "I am a " << i->getType() << " and ";
	i->makeSound();

	std::cout << std::endl;
	delete j;
	delete i;
	delete meta;
	std::cout << std::endl;

	const WrongAnimal*	wrongMeta = new WrongAnimal;
	const WrongAnimal*	wrongi = new WrongCat;
	std::cout << std::endl;

	std::cout << "I am a " << wrongMeta->getType() << " and ";
	wrongMeta->makeSound();
	std::cout << "I am a " << wrongi->getType() << " and ";
	wrongi->makeSound();

	std::cout << std::endl;
	delete wrongi;
	delete wrongMeta;
}