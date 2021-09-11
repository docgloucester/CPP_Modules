/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 09:34:46 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/11 11:27:35 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon::~Weapon()
{

}

void		Weapon::setType(std::string type) 
{
	this->_type = type;
}

std::string	Weapon::getType(void) const
{
	return (this->_type);
}