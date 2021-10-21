/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:00:44 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/21 20:23:38 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>
#include <PresidentialPardonForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>

Intern::Intern()
{
	_drawers[0].form = "shrubbery creation";
	_drawers[0].f = &Intern::makescform;
	_drawers[1].form = "robotomy request";
	_drawers[1].f = &Intern::makerrform;
	_drawers[2].form = "presidential pardon";
	_drawers[2].f = &Intern::makeppform;
	std::cout << "Recruited new intern" << std::endl;
}

Intern::Intern(const Intern& src)
{
	*this = src;
}

Intern::~Intern()
{
	std::cout << "Fired intern" << std::endl;
}

Intern&	Intern::operator=(const Intern& src)
{
	if (this != &src)
	{
		for (int i = 0; i < 3; i++)
		{
			this->_drawers[i] = src._drawers[i];
		}
	}
	return (*this);
}

Form*	Intern::makeForm(std::string formname, std::string target)
{
	int	formid;
	int	i;

	i = -1;
	formid = 0;
	while (formname != this->_drawers[++i].form)
		if (i == 3)
		{
			formid = -1;
			break;
		}
	if (formid != -1)
		formid = i;
	if (formid >= 0)
	{
		std::cout << "Intern creates form " << formname << std::endl;
		return((this->*this->_drawers[formid].f)(target));
	}
	else
		throw Intern::UnknownFormException();

}

Form*	Intern::makescform(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::makerrform(std::string target) const
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::makeppform(std::string target) const
{
	return (new PresidentialPardonForm(target));
}
