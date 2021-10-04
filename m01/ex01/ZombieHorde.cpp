/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:25:04 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/03 20:28:46 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
	std::ostringstream	oss;

	Zombie*	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		oss << name << " " << i + 1;
		horde[i].setName(oss.str());
		oss.str("");
		oss.clear();
	}
	return (horde);
}
