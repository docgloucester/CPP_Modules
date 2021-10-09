/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:46:19 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/09 18:49:29 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"), FragTrap(name  + "_clap_name"), ScavTrap(name + "_clap_name"), _name(name)
{
	this->_hitPts = FragTrap::_hitPts;
	this->_energyPts = ScavTrap::_energyPts;
	this->_attackDmg = FragTrap::_attackDmg;
	std::cout << "DiamondTrap " << this->_name << " just spawned." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src): ClapTrap("Default"), FragTrap("Default"), ScavTrap("Default"), _name("Default")
{
	*this = src;
	std::cout << "DiamondTrap " << this->_name << " just duplicated itself." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " vanished." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhm) 
{
	std::cout << "DiamondTrap " << this->_name << " metamorphoses into " << rhm._name << "." << std::endl;
	if (&rhm != this)
	{
		this->_name = rhm._name;
		this->ClapTrap::_name = rhm.ClapTrap::_name;
		this->_hitPts = rhm._hitPts;
		this->_energyPts = rhm._energyPts;
		this->_attackDmg = rhm._attackDmg;
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << this->ClapTrap::_name << " says that his name is " << this->_name << std::endl;
}