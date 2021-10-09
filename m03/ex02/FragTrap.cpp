/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:57:38 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/09 13:47:13 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	std::cout << "FragTrap " << this->_name << " just spawned." << std::endl;
}

FragTrap::FragTrap(const FragTrap& src): ClapTrap(src._name)
{
	*this = src;
	std::cout << "FragTrap " << this->_name << " just duplicated itself." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " vanished." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhm) 
{
	std::cout << "FragTrap " << this->_name << " metamorphoses into " << rhm._name << "." << std::endl;
	if (&rhm != this)
	{
		this->_name = rhm._name;
		this->_hitPts = rhm._hitPts;
		this->_energyPts = rhm._energyPts;
		this->_attackDmg = rhm._attackDmg;
	}
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " high fives everyone like a madman" << std::endl;
}
