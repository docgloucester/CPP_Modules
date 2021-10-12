/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:47 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 16:45:29 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog()
{
	this->_brain = new Brain;
	this->_type = "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog& src) 
{
	this->_brain = new Brain(*src._brain);
	this->_type = src._type;
	std::cout << "Dog created by copy" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog& src) 
{
	if (this != &src)
	{
		this->_type = src._type;
		*this->_brain = *src._brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->_type << " goes bork" << std::endl;
}

void Dog::readIdea(int i) 
{
	std::cout << this->_type << " thinks: " << this->_brain->readIdea(i) << std::endl;
}

void Dog::writeIdea(int i, std::string idea) 
{
	this->_brain->writeIdea(i, idea);
}
