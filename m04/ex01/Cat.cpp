/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:55 by rgilles           #+#    #+#             */
/*   Updated: 2021/11/02 15:11:56 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat()
{
	this->_brain = new Brain;
	this->_type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat& src) : Animal()
{
	this->_brain = new Brain(*src._brain);
	this->_type = src._type;
	std::cout << "Cat created by copy" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat& src) 
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = src._brain;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << this->_type << " goes meow" << std::endl;
}

void Cat::readIdea(int i) 
{
	std::cout << this->_type << " thinks: " << this->_brain->readIdea(i) << std::endl;
}

void Cat::writeIdea(int i, std::string idea) 
{
	this->_brain->writeIdea(i, idea);
}