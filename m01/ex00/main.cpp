/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:12:29 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/08 23:18:06 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);


int	main(void)
{
	Zombie* heapZombie = newZombie("Theodule");
	randomChump("Martheline");
	heapZombie->announce();
	delete heapZombie;
	return (0);
}