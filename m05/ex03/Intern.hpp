/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:00:44 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/21 20:03:14 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <Form.hpp>

class Intern
{
public:
	Intern();
	Intern(const Intern& src);
	Intern& operator=(const Intern& src);
	~Intern();
	Form*	makeForm(std::string form, std::string target);
	Form*	makescform(std::string target) const;
	Form*	makerrform(std::string target) const;
	Form*	makeppform(std::string target) const;
	struct	UnknownFormException : std::exception
	{
		const char*	what() const throw()
		{
			return ("\033[0;31mException : Unknown form!\033[0m");
		}
	};
	struct Drawer
	{
		Drawer&	operator=(const Drawer& src)
		{
			if (this != &src)
			{
				this->form = src.form;
				this->f = src.f;
			}
			return (*this);
		}
		std::string	form;
		Form*	(Intern::*f)(std::string target) const;
	};
private:
	Drawer	_drawers[3];
};

#endif