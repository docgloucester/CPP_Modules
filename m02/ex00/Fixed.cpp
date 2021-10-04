/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:57:52 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/30 17:07:36 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed(): _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src): _raw(src.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& src) 
{
	std::cout << "Assignation constructor called" << std::endl;
	if (this != &src) // self-assignment check
		this->_raw = src.getRawBits();
	return(*this); //allows for operator chaining
}

int	Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_raw);
}

void	Fixed::setRawBits(const int raw) 
{
	this->_raw = raw;
}