/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:18:29 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/21 18:26:02 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <Form.hpp>
# include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target = "");
	virtual ~ShrubberyCreationForm();
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