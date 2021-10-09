/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:19:17 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/09 17:49:41 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <FragTrap.hpp>
#include <ScavTrap.hpp>
#include <DiamondTrap.hpp>

int	main(void)
{
	std::cout << "***Constructor tests***" << std::endl;
	ClapTrap	martine("Claps");
	DiamondTrap	martin("Diams");
	DiamondTrap	martin3(martin);

	std::cout << std::endl << "***General function tests***" << std::endl;
	martine.attack("an evil foe");
	martin3.attack("an evil foe");
	martine.takeDamage(10);
	martin3.takeDamage(10);
	martine.beRepaired(10);
	martin3.beRepaired(10);
	martin3.highFivesGuys();
	martin3.guardGate();
	martin3.whoAmI();
	std::cout << std::endl << "***Destructors***" << std::endl;
}