/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:19:17 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/09 13:44:50 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <FragTrap.hpp>

int	main(void)
{
	std::cout << "***Constructor tests***" << std::endl;
	ClapTrap	martine("Martine");
	FragTrap	martin("Martin");
	FragTrap	martin3(martin);

	std::cout << std::endl << "***General function tests***" << std::endl;
	martin3.rename("Martinz");
	martine.attack("an evil foe");
	martin3.attack("an evil foe");
	martine.takeDamage(10);
	martin3.takeDamage(10);
	martine.beRepaired(10);
	martin3.beRepaired(10);
	martin3.highFivesGuys();
	std::cout << std::endl << "***Destructors***" << std::endl;
}