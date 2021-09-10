/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 09:34:46 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/10 10:01:02 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

void		Weapon::setType(std::string type) 
{
	this->type = type;
}

std::string	Weapon::getType(void) const
{
	return (this->type);
}