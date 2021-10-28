/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:39 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/29 01:57:13 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>

AAnimal::AAnimal()
{
	this->_type = "Animal";
	std::cout << "Animal created" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src) 
{
	*this = src;
	std::cout << "Animal created by copy" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destroyed" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& src) 
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string AAnimal::getType() const 
{
	return this->_type;
}
