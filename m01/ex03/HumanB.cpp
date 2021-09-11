/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 09:38:39 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/11 12:11:58 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string name) : _name(name), _gear(NULL)
{
	std::cout << this->_name << " spawns naked" << std::endl;
}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon& wp) 
{
	this->_gear = &wp;
	std::cout << this->_name << " has equipped a " << this->_gear->getType() << std::endl;
}

void HumanB::attack(void) const
{
	if (this->_gear)
		std::cout << this->_name << " attacks with his " << this->_gear->getType() << std::endl;
	else
		std::cout << this->_name << " doesn't have a weapon. Boo!" << std::endl;
}

