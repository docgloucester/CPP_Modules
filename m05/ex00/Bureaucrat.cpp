/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:51:10 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/20 14:22:40 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat(std::string name = "", int grade = 150) : _name(name), _grade(grade)
{
	std::cout << "Created"
	if (name.empty())
		std::cout << " unnamed Bureaucrat";
	else
		std::cout << " Bureaucrat " << this->_name;
	std::cout << " with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) 
{
	*this = src;
	std::cout << "Created new"
	if (name.empty())
		std::cout << " unnamed Bureaucrat";
	else
		std::cout << " Bureaucrat " << this->_name;
	std::cout << " with grade " << this->_grade << " by copy" << std::endl;
}

Bureaucrat::~Bureaucrat() 
{
	std::cout << "Deleted"
	if (name.empty())
		std::cout << " unnamed Bureaucrat" << std::endl;
	else
		std::cout << " Bureaucrat " << this->_name << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) 
{
	this->_name = src._name;
	this->_grade = src._grade;
}

std::string Bureaucrat::getName(void) 
{
	return (this->_name);
}

Bureaucrat::getGrade(void) 
{
	return (this->_grade);
}
