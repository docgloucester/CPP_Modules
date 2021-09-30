/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:32:07 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/30 14:48:06 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Karen.hpp>

Karen::Karen() {}

Karen::~Karen() {}

void Karen::complain(std::string level) 
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	verbosity;
	void (Karen::*f)(void) const;
	int	i;

	i = -1;
	verbosity = 0;
	while (level != levels[++i])
		if (i == 3)
		{
			verbosity = -1;
			break;
		}
	if (verbosity != -1)
		verbosity = i;

	switch (verbosity)
	{
		case 0:
			f = &Karen::debug;
			(this->*f)();
			break;
		case 1:
			f = &Karen::info;
			(this->*f)();
			break;
		case 2:
			f = &Karen::warning;
			(this->*f)();
			break;
		case 3:
			f = &Karen::error;
			(this->*f)();
			break;
		default:
			std::cout << "Invalid verbosity level." << std::endl;
	}
}

void Karen::debug(void) const
{
	std::cout << "[DEBUG]" << std::endl << "I love to get extra bacon for my " <<
	"7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
	<< std::endl;
}

void Karen::info(void) const
{
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon cost more money. "
	<< "You don’t put enough! If you did I would not have to ask for it!"
	<< std::endl;
}

void Karen::warning(void) const
{
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve "
	<< "been coming here for years and you just started working here last month."
	<< std::endl;
}

void Karen::error(void) const
{
	std::cout << "[ERROR]" << std::endl << "This is unacceptable, I want to speak to the manager now."
	<< std::endl;
}