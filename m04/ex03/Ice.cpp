/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:53:08 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/29 21:00:15 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice materia created" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice materia destroyed" << std::endl;
}

Ice* Ice::clone() const 
{
	return (new Ice);
}

void Ice::use(ICharacter& target) 
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}