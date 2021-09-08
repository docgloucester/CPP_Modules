/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:50:56 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/08 15:23:22 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <Zombie.hpp>

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->_name << " just spawned. But where??" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been slain by the sword of doom." << std::endl;
}

void Zombie::announce(void) 
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
