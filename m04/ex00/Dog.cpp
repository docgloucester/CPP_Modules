/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:47 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 15:24:36 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog& src) 
{
	*this = src;
	std::cout << "Dog created by copy" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog& src) 
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->_type << " goes bork" << std::endl;
}
