/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:18:35 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/21 18:11:18 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
	
}

void PresidentialPardonForm::launchAction(void) const 
{
	if (this->_target.empty())
		throw PresidentialPardonForm::NoTargetException();
	else
	{
		std::cout << this->_target << " has been granted presidential pardon by his Excellence Zaphod Beeblebrox." << std::endl;
	}
}