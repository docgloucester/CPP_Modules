/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:55 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 15:14:07 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat& src) 
{
	*this = src;
	std::cout << "Cat created by copy" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat& src) 
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << this->_type << " goes meow" << std::endl;
}
