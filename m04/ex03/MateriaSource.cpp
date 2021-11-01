/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:12:06 by rgilles           #+#    #+#             */
/*   Updated: 2021/11/01 14:54:35 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>

MateriaSource::MateriaSource() : _slotno(0){}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_slotno; i++)
		delete this->_slots[i];
}

void	MateriaSource::learnMateria(AMateria* mat) 
{
	if (this->_slotno < 4)
	{
		this->_slots[this->_slotno++] = mat;
		std::cout << "Source learned new materia " << mat->getType() << std::endl;
	}
}

AMateria* MateriaSource::createMateria(const std::string& type) 
{
	for (int i = 0; i < this->_slotno; i++)
	{
		if (type == this->_slots[i]->getType())
		{
			std::cout << "Source emitted materia " << type << std::endl;
			return this->_slots[i]->clone();
		}
	}
	return (0);
}