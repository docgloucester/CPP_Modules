/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:57:38 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/08 16:53:49 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	std::cout << "ScavTrap " << this->_name << " just spawned." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src): ClapTrap(src._name)
{
	*this = src;
	std::cout << "ScavTrap " << this->_name << " just duplicated itself." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " vanished." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhm) 
{
	std::cout << "ScavTrap " << this->_name << " metamorphoses into " << rhm._name << "." << std::endl;
	if (&rhm != this)
	{
		this->_name = rhm._name;
		this->_hitPts = rhm._hitPts;
		this->_energyPts = rhm._energyPts;
		this->_attackDmg = rhm._attackDmg;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target) 
{
	if (this->_hitPts > 0 && this->_energyPts > 0)
	{
		this->_energyPts--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDmg << " points of damage! Not bad! EP left: " << this->_energyPts << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is out of order! "<< ((this->_hitPts <= 0) ? "(no HP)" : "(no EP)") << std::endl;
}

void	ScavTrap::guardGate() 
{
	std::cout << "ScavTrap " << this->_name << " entered Gate Keeper mode." << std::endl;
}
