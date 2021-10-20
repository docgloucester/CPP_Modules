/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:52:01 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/20 17:10:09 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
# include <iostream>

class Bureaucrat;

class Form
{
	public:
		Form(std::string name = "", int sgrade = 150, int egrade = 150);
		Form(const Form& src);
		~Form();

		Form&	operator=(const Form& src);
		std::string	getName(void) const;
		int			getSigningGrade(void) const;
		int			getExecGrade(void) const;
		bool		isSigned(void) const;
		void		beSigned(Bureaucrat& agent);
		struct 		GradeTooHighException : public std::exception
		{
			const char*	what() const throw()
			{
				return ("\033[0;31mException : Grade too high!\033[0m");
			}		
		};
		struct 		GradeTooLowException : public std::exception
		{
			const char*	what() const throw()
			{
				return ("\033[0;31mException : Grade too low!\033[0m");
			}		
		};
	private:
		const std::string	_name;
		const int			_signingGrade;
		const int			_execGrade;
		bool				_isSigned;
};

std::ostream&	operator<<(std::ostream &stream, const Form& src);

#endif