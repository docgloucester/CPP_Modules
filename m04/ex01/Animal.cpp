/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:39 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 15:53:32 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal& src) 
{
	*this = src;
	std::cout << "Animal created by copy" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

Animal& Animal::operator=(const Animal& src) 
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string Animal::getType() const 
{
	return this->_type;
}

void Animal::makeSound() const
{
	std::cout << this->_type << " produces an undistinguishable noise" << std::endl;
}