/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:53:15 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/29 21:00:11 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure materia created" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure materia destroyed" << std::endl;
}

Cure* Cure::clone() const 
{
	return (new Cure);
}

void Cure::use(ICharacter& target) 
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
