/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:50:05 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/20 17:01:30 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <Form.hpp>
# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name = "", int grade = 150);
		Bureaucrat(const Bureaucrat& src);
		~Bureaucrat();

		Bureaucrat&	operator=(const Bureaucrat& src);
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		increaseGrade(unsigned int amount);
		void		decreaseGrade(unsigned int amount);
		void		signForm(Form& form);
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
		int					_grade;
};

std::ostream&	operator<<(std::ostream &stream, const Bureaucrat& src);

#endif
