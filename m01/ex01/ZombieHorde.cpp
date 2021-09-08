/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:25:04 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/09 00:38:10 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
