/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:19:17 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/07 15:43:13 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int	main(void)
{
	std::cout << "***Constructor tests***" << std::endl;
	ClapTrap	martin("Martin");
	ClapTrap	martine("Martine");
	ClapTrap	martin3(martin);

	martin3 = martine;
	
	std::cout << std::endl << "***General function tests***" << std::endl;
	martin.attack("an evil foe");
	martine.attack("the same foe");
	martin3.attack("also the same foe");
	martin3.attack("a vague silhouette");

	std::cout << std::endl << "***Testing EP logic***" << std::endl;
	martin3.attack("the air aggressively");
	martin3.attack("the air aggressively");
	martin3.attack("the air aggressively");
	martin3.attack("the air aggressively");
	martin3.attack("the air aggressively");
	martin3.attack("the air aggressively");
	martin3.attack("the air aggressively");
	martin3.attack("the air aggressively");
	martin3.attack("the air aggressively");

	std::cout << std::endl << "***Testing HP logic***" << std::endl;
	martin3.beRepaired(10);
	martin3.attack("a vague silhouette");
	martin3.takeDamage(200);
	martin3.attack("a vague silhouette");
	martin3.beRepaired(181);
	martin3.attack("a vague silhouette");

}