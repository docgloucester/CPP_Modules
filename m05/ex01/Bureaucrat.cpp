/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:51:10 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/21 14:28:41 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade >= 1 && grade <= 150)
	{
		std::cout << "Created";
		if (this->_name.empty())
			std::cout << " unnamed Bureaucrat";
		else
			std::cout << " Bureaucrat " << this->_name;
		std::cout << " with grade " << this->_grade << std::endl;
	}
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name)
{
	*this = src;
	std::cout << "Created new";
	if (this->_name.empty())
		std::cout << " unnamed Bureaucrat";
	else
		std::cout << " Bureaucrat " << this->_name;
	std::cout << " with grade " << this->_grade << " by copy" << std::endl;
}

Bureaucrat::~Bureaucrat() 
{
	std::cout << "Deleted";
	if (this->_name.empty())
		std::cout << " unnamed Bureaucrat" << std::endl;
	else
		std::cout << " Bureaucrat " << this->_name << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) 
{
	if (this != &src)
	{
		this->_grade = src._grade;
	}
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::decreaseGrade(unsigned int amount) 
{
	if (this->_grade + (int)amount <= 150)
	{
		this->_grade += amount;
		if (this->_name.empty())
			std::cout << "Unnamed Bureaucrat's";
		else
			std::cout << "Bureaucrat " << this->_name << "'s";
		std::cout << " grade has been decreased by " << amount << " to " << this->_grade << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::increaseGrade(unsigned int amount) 
{
	if (this->_grade - (int)amount >= 1)
	{
		this->_grade -= amount;
		if (this->_name.empty())
			std::cout << "Unnamed Bureaucrat's";
		else
			std::cout << "Bureaucrat " << this->_name << "'s";
		std::cout << " grade has been increased by " << amount << " to " << this->_grade << std::endl;
	}
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::signForm(Form& form) 
{
	try
	{
		form.beSigned(*this);
		if (this->_name.empty())
			std::cout << "Unnamed Bureaucrat";
		else
			std::cout << "Bureaucrat " << this->_name;
		std::cout << " signs ";
		if (!form.getName().empty())
			std::cout << "form " << form.getName();
		else
			std::cout << "an unnamed form";
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		if (this->_name.empty())
			std::cout << "Unnamed Bureaucrat";
		else
			std::cout << "Bureaucrat " << this->_name;
		std::cout << " cannot sign because " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &stream, const Bureaucrat& src)
{
	if (!src.getName().empty())
			std::cout << src.getName();
	else
			std::cout << "Unnamed bureaucrat";
	stream << ", bureaucrat of grade " << src.getGrade();
	return (stream);
}
