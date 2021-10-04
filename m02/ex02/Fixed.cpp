/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:57:52 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/04 12:38:51 by rgilles          ###   ########.fr       */
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

Fixed::Fixed(const int integer) 
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw = integer << this->_nbFracBits;
}

Fixed::Fixed(const float floating) 
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw = roundf(floating * (1 << this->_nbFracBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& src) 
{
	std::cout << "Assignation constructor called" << std::endl;
	if (this != &src) // self-assignment check
		this->_raw = src.getRawBits();
	return(*this); //allows for operator chaining
}

int	Fixed::getRawBits(void) const 
{
	return(this->_raw);
}

void	Fixed::setRawBits(const int raw) 
{
	this->_raw = raw;
}

float	Fixed::toFloat(void) const 
{
	float	ret;
	ret = this->_raw;
	ret /= (1 << this->_nbFracBits);
	return (ret);
}

int	Fixed::toInt(void) const 
{
	return (this->_raw >> this->_nbFracBits);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& number) 
{
	out << number.toFloat();
	return (out);
}

bool	operator<(const Fixed& n1, const Fixed& n2)
{
	return (n1.getRawBits < n2.getRawBits);
}

bool	operator>(const Fixed& n1, const Fixed& n2)
{
	return (n1.getRawBits > n2.getRawBits);
}

bool	operator<=(const Fixed& n1, const Fixed& n2)
{
	return (n1.getRawBits <= n2.getRawBits);
}

bool	operator>=(const Fixed& n1, const Fixed& n2)
{
	return (n1.getRawBits >= n2.getRawBits);
}

bool	operator==(const Fixed& n1, const Fixed& n2)
{
	return (n1.getRawBits == n2.getRawBits);
}

bool	operator!=(const Fixed& n1, const Fixed& n2)
{
	return (n1.getRawBits != n2.getRawBits);
}
