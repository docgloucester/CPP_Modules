/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 09:51:37 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/10 10:09:12 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <HumanA.hpp>
#include <HumanB.hpp>

int	main(void)
{
	Weapon	weaponA;
	Weapon	weaponB;

	weaponA.setType("butter knife");
	weaponB.setType("deadly gaze");

	HumanA humanA("Marcel", weaponA);
	HumanB humanB("Gerard Fliboudin");

	humanA.attack();
	humanB.attack();
	humanB.equipWeapon(&weaponB);
	humanB.attack();

	return (0);
}