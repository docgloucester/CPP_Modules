/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:50:05 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/20 13:51:46 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& src);
	~Bureaucrat();

	Bureaucrat&	operator=(const Bureaucrat& src);
	std::string	getName(void);
	int			getGrade(void);
private:
	std::string	_name;
	int			_grade;
};
#endif