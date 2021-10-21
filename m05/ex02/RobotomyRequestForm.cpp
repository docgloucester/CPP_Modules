/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:18:35 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/21 18:45:31 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
	
}

void RobotomyRequestForm::launchAction(void) const 
{
	if (this->_target.empty())
		throw RobotomyRequestForm::NoTargetException();
	else
	{
		std::cout << "*loud drilling noises*" << std::endl;
		srand(time(NULL));
		if ((rand() % 2) == 1)
		{
			std::cout << "Robotomy failed, drill burst into flames." << std::endl;
			return ;
		}
		else
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
	}
}