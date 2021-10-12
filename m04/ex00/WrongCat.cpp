/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:57:13 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 15:14:14 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) 
{
	*this = src;
	std::cout << "WrongCat created by copy" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src) 
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << this->_type << " goes meow" << std::endl;
}
