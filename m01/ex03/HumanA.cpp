/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 09:38:31 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/10 10:04:08 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon wp): _name(name), _gear(wp)
{
	std::cout << this->_name << " spawns with his " << this->_gear.getType() << std::endl;
}

HumanA::~HumanA() 
{
	
}

void HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_gear.getType() << std::endl;
}