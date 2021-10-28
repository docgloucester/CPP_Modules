/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:18:25 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/29 01:57:14 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int	main()
{
	//const Animal* meta = new Animal;
	const AAnimal* j = new Dog;
	const AAnimal* i = new Cat;
	std::cout << std::endl;

	//std::cout << "I am a " << meta->getType() << " and ";
	//meta->makeSound();
	std::cout << "I am a " << j->getType() << " and ";
	j->makeSound();
	std::cout << "I am a " << i->getType() << " and ";
	i->makeSound();

	std::cout << std::endl;
	delete j;
	delete i;
	//delete meta;
}