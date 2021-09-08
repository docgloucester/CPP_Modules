/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:50:56 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/09 00:49:24 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <Zombie.hpp>

Zombie::Zombie()
{
	std::cout << "A zombie just spawned. But where??" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been slain by the sword of doom." << std::endl;
}

void	Zombie::announce(void) 
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}