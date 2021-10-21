/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:18:29 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/21 18:26:08 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <Form.hpp>
# include <stdlib.h>
# include <time.h>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string target = "");
	virtual ~RobotomyRequestForm();
	virtual void	launchAction(void) const;
	struct	NoTargetException : std::exception
	{
		const char*	what() const throw()
		{
			return ("\033[0;31mException : no target provided!\033[0m");
		}
	};
private:
	std::string	_target;
};

#endif