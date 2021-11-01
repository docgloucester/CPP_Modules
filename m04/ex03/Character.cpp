/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:54:41 by rgilles           #+#    #+#             */
/*   Updated: 2021/11/01 14:14:34 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = 0;
}

Character::Character(const Character& src) : _name(src._name)
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = 0;
	*this = src;
}

const Character& Character::operator=(const Character& src) 
{
	if (&src != this)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_slots[i])
				delete this->_slots[i];
			if (src._slots[i])
				this->_slots[i] = src._slots[i]->clone();
			else
				this->_slots[i] = 0;
		}
			
	}
	return (*this);
}

Character::~Character() 
{
	for (int i = 0; i < 4; i++)
		if (this->_slots[i])
			delete this->_slots[i];
}

const std::string& Character::getName() const 
{
	return (this->_name);
}

void	Character::equip(AMateria* m) 
{
	for (int i = 0; i < 4; ++i)
		if (this->_slots[i] == 0)
		{
			this->_slots[i] = m;
			std::cout << this->_name << " has equipped new materia " << m->getType() << std::endl;
			return ;
		}
}

void	Character::unequip(int idx) 
{
	if (idx < 4 && this->_slots[idx])
	{
		std::cout << this->_name << " has unequipped materia " << this->_slots[idx]->getType() << std::endl;
		this->_slots[idx] = 0;
	}
}

AMateria*	Character::getMateria(int idx) 
{
	return (this->_slots[idx]);
}

void	Character::use(int idx, ICharacter& target) 
{
	if (idx < 4 && this->_slots[idx])
		this->_slots[idx]->use(target);
}