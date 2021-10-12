/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:18:25 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 16:20:31 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int	main()
{
	std::cout << "***Deep copy test***" << std::endl;
	Dog woof;
	woof.writeIdea(0, "Eat bone");
	std::cout << "Writing new idea in woof's brain" << std::endl << std::endl;

	Dog woof2(woof);
	std::cout << std::endl;

	std::cout << "Reading in both brains the idea written before copy" << std::endl;
	woof.readIdea(0);
	woof2.readIdea(0);

	std::cout << std::endl << "Writing new idea in woof's brain" << std::endl;
	woof.writeIdea(1, "Chase tail");

	std::cout << "Reading in both brains the idea written after copy" << std::endl;
	woof.readIdea(1);
	woof2.readIdea(1);



	std::cout << std::endl << "***Array test***" << std::endl;
	Animal* zoo[4];

	for(int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << "Creating animal " << i << " of type Dog" << std::endl;
			zoo[i] = new Dog;
			std::cout << std::endl;
		}
		else
		{
			std::cout << "Creating animal " << i << " of type Cat" << std::endl;
			zoo[i] = new Cat;
			std::cout << std::endl;
		}
	}

	std::cout << "Now destroying..." << std::endl;

	std::cout << std::endl;
	for(int i = 0; i < 4; i++)
	{
		std::cout << "Deleting animal " << i << std::endl;
		delete zoo[i];
		std::cout << std::endl;
	}
}