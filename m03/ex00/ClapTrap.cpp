/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 04:23:46 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/07 15:30:25 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap(const std::string& name): _name(name), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	std::cout <<"ClapTrap " << this->_name << " just spawned." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src): _name(src._name), _hitPts(src._hitPts), _energyPts(src._energyPts), _attackDmg(src._attackDmg)
{

	std::cout <<"ClapTrap " << this->_name << " just duplicated itself." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout <<"ClapTrap " << this->_name << " vanished." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhm) 
{
	std::cout <<"ClapTrap " << this->_name << " metamorphoses into " << rhm._name << std::endl;
	if (&rhm != this)
	{
		this->_name = rhm._name;
		this->_hitPts = rhm._hitPts;
		this->_energyPts = rhm._energyPts;
		this->_attackDmg = rhm._attackDmg;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target) 
{
	if (this->_hitPts > 0 && this->_energyPts > 0)
	{
		this->_energyPts--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is out of order! "<< ((this->_hitPts <= 0) ? "(no HP)" : "(no EP)") << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	this->_hitPts -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
	this->_hitPts += amount;
	this->_energyPts += amount;
	std::cout << "ClapTrap " << this->_name << " gets back " << amount << " HPs and EPs!" << std::endl;
}