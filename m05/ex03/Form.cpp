/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:52:01 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/21 18:25:04 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Form::Form(std::string name, int sgrade, int egrade) : _name(name), _signingGrade(sgrade), _execGrade(egrade), _isSigned(false)
{
	if (sgrade >= 1 && sgrade <= 150 && egrade >=1 && egrade <= 150)
	{
		std::cout << "Created";
		if (this->_name.empty())
			std::cout << " unnamed Form";
		else
			std::cout << " Form " << this->_name;
		std::cout << " with signing grade " << this->_signingGrade
		<< " and executing grade " << this->_execGrade << std::endl;
	}
	else if (sgrade > 150 || egrade > 150)
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
	std::cout << " with signing grade " << this->_signingGrade << " by copy"
		<< "and executing grade " << this->_execGrade << std::endl;
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

void	Form::beSigned(const Bureaucrat& agent) 
{
	if (agent.getGrade() <= this->_signingGrade)
		this->_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

void	Form::execute(const Bureaucrat& executor) const
{
	if (this->_isSigned && executor.getGrade() <= this->_execGrade)
	{
		try
		{
			this->launchAction();
		}
		catch (std::exception& e)
		{
			throw;
		}
	}
	else if (executor.getGrade() > this->_execGrade)
		throw Form::GradeTooLowException();
	else
		throw Form::UnsignedFormExecAttempt();
}

std::ostream&	operator<<(std::ostream &stream, const Form& src)
{
	if (!src.getName().empty())
			stream << "Form " << src.getName();
	else
			stream << "Unnamed form";
	stream << ", form of signing grade " << src.getSigningGrade()
		<< " and of execution grade " << src.getExecGrade();
	if (src.isSigned())
		stream << ", signed." << std::endl;
	else
		stream << ", unsigned." << std::endl;
	return (stream);
}