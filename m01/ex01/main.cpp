/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 00:24:24 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/09 00:53:43 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie* zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie*	horde;

	horde = zombieHorde(10, "Mr. Brainz");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete [] horde;
}