/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:19:17 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/08 16:43:59 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

int	main(void)
{
	std::cout << "***Constructor tests***" << std::endl;
	ClapTrap	martine("Martine");
	ScavTrap	martin("Martin");
	ScavTrap	martin3(martin);

	std::cout << std::endl << "***General function tests***" << std::endl;
	martin3.rename("Martinz");
	martine.attack("an evil foe");
	martin3.attack("an evil foe");
	martine.takeDamage(10);
	martin3.takeDamage(10);
	martine.beRepaired(10);
	martin3.beRepaired(10);
	martin3.guardGate();

	std::cout << std::endl << "***Destructors***" << std::endl;
}