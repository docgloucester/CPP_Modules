/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:57:52 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/06 04:02:31 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed(): _raw(0)
{}

Fixed::Fixed(const Fixed& src): _raw(src.getRawBits())
{}

Fixed::Fixed(const int integer) 
{
	this->_raw = integer << Fixed::_nbFracBits;
}

Fixed::Fixed(const float floating) 
{
	this->_raw = roundf(floating * (1 << Fixed::_nbFracBits));
}

Fixed::~Fixed()
{}

/**********************************
** Arithmetic operators overloads**
**********************************/

Fixed&	Fixed::operator=(const Fixed& src) 
{
	if (this != &src)
		this->_raw = src.getRawBits();
	return(*this);
}

Fixed	Fixed::operator+(const Fixed& rhm) const
{
	Fixed	result;

	result.setRawBits(this->_raw + rhm.getRawBits());
	return(result);
}

Fixed	Fixed::operator-(const Fixed& rhm) const
{
	Fixed	result;

	result.setRawBits(this->_raw - rhm.getRawBits());
	return(result);
}

Fixed	Fixed::operator*(const Fixed& rhm) const
{
	Fixed	result;

	result.setRawBits((this->_raw * rhm.getRawBits()) >> Fixed::_nbFracBits);
	return(result);
}

Fixed	Fixed::operator/(const Fixed& rhm) const
{
	Fixed	result;

	result.setRawBits((this->_raw << Fixed::_nbFracBits) / rhm.getRawBits());
	return(result);
}

Fixed&	Fixed::operator++ (void)
{
	this->_raw++;
	return (*this);
}

Fixed&	Fixed::operator-- (void)
{
	this->_raw--;
	return (*this);
}

Fixed	Fixed::operator++ (int)
{
	Fixed	pre(*this);
	++(*this);
	return (pre);
}

Fixed	Fixed::operator-- (int)
{
	Fixed	pre(*this);
	--(*this);
	return (pre);
}


/*******************************
** Logical operators overloads**
********************************/

bool	Fixed::operator<(const Fixed& n2) const
{
	return (this->getRawBits() < n2.getRawBits());
}

bool	Fixed::operator>(const Fixed& n2) const
{
	return (this->getRawBits() > n2.getRawBits());
}

bool	Fixed::operator<=(const Fixed& n2) const
{
	return (this->getRawBits() <= n2.getRawBits());
}

bool	Fixed::operator>=(const Fixed& n2) const
{
	return (this->getRawBits() >= n2.getRawBits());
}

bool	Fixed::operator==(const Fixed& n2) const
{
	return (this->getRawBits() == n2.getRawBits());
}

bool	Fixed::operator!=(const Fixed& n2) const
{
	return (this->getRawBits() != n2.getRawBits());
}

/*******************************
** Static method for min/max  **
********************************/

const Fixed& Fixed::min(const Fixed& n1, const Fixed& n2) 
{
	return(n1 < n2 ? n1 : n2);
}

const Fixed& Fixed::max(const Fixed& n1, const Fixed& n2) 
{
	return(n1 > n2 ? n1 : n2);
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

/***************************
** Out-of-class overloads **
***************************/

std::ostream&	operator<<(std::ostream& out, const Fixed& number) 
{
	out << number.toFloat();
	return (out);
}

const Fixed& min(const Fixed& n1, const Fixed& n2)
{
	return(n1 < n2 ? n1 : n2);
}

const Fixed& max(const Fixed& n1, const Fixed& n2)
{
	return(n1 > n2 ? n1 : n2);
}