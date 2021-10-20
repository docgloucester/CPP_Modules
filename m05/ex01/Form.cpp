/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:52:01 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/20 17:06:50 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form(std::string name, int sgrade, int egrade) : _name(name), _signingGrade(sgrade), _execGrade(egrade), _isSigned(false)
{
	if (sgrade >= 1 && sgrade <= 150)
	{
		std::cout << "Created";
		if (this->_name.empty())
			std::cout << " unnamed Form";
		else
			std::cout << " Form " << this->_name;
		std::cout << " with signing grade " << this->_signingGrade << std::endl;
	}
	else if (sgrade > 150)
		throw Form::GradeTooLowException();
	else
		throw Form::GradeTooHighException();
}

Form::Form(const Form& src) : _name(src._name), _signingGrade(src._signingGrade), _execGrade(src._execGrade)
{
	*this = src;
	std::cout << "Created new";
	if (this->_name.empty())
		std::cout << " unnamed Form";
	else
		std::cout << " Form " << this->_name;
	std::cout << " with signing grade " << this->_signingGrade << " by copy" << std::endl;
}

Form::~Form() 
{
	std::cout << "Deleted";
	if (this->_name.empty())
		std::cout << " unnamed Form" << std::endl;
	else
		std::cout << " Form " << this->_name << std::endl;
}

Form& Form::operator=(const Form& src) 
{
	if (this != &src)
	{
		this->_isSigned = src._isSigned;
	}
	return (*this);
}

std::string Form::getName(void) const
{
	return (this->_name);
}

int	Form::getSigningGrade(void) const
{
	return (this->_signingGrade);
}

int	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

bool	Form::isSigned(void) const
{
	return (_isSigned);
}

void	Form::beSigned(Bureaucrat& agent) 
{
	if (agent.Grade <= this->_signingGrade)
		this->_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream &stream, const Form& src)
{
	if (!src.getName().empty())
			std::cout << src.getName();
	else
			std::cout << "Unnamed form";
	stream << ", form of signing grade " << src.getSigningGrade()
		<< " and of execution grade " << src.getExecGrade();
	if (src.isSigned())
		std::cout << ", signed." << std::endl;
	else
		std::cout << ", unsigned." << std::endl;
	return (stream);
}