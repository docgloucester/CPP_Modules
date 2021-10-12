/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:35:00 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 16:27:38 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain()
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = "Unformed idea";
	std::cout << "New brain is formed" << std::endl;
}

Brain::Brain(const Brain& src) 
{
	*this = src;
	std::cout << "New brain is formed by copy" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is destroyed" << std::endl;
}

Brain&	Brain::operator=(const Brain& src) 
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}

void	Brain::writeIdea(int i, std::string idea) 
{
	if (i >= 0 && i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << "Invalid brain index during write: " << i << std::endl;
}

std::string Brain::readIdea(int i) const 
{
	if (i >= 0 && i < 100)
		return (this->_ideas[i]);
	else
	{
		std::cout << "Invalid brain index during read: " << i << std::endl;
		return "";
	}
}