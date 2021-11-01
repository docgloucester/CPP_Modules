/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:31:33 by rgilles           #+#    #+#             */
/*   Updated: 2021/11/01 14:54:38 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria(const std::string& type) : _type(type){}

AMateria::AMateria(const AMateria& src) : _type(src._type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria(){}

AMateria&	AMateria::operator=(const AMateria& src) 
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

const std::string&	AMateria::getType() const 
{
	return (this->_type);
}