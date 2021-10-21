/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:18:29 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/21 18:26:17 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <Form.hpp>

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string target = "");
	virtual ~PresidentialPardonForm();
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