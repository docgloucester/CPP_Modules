/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:57:07 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 15:24:46 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) 
{
	*this = src;
	std::cout << "WrongAnimal created by copy" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) 
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string WrongAnimal::getType() const 
{
	return this->_type;
}

void WrongAnimal::makeSound() const
{
	std::cout << this->_type << " produces an undistinguishable noise" << std::endl;
}