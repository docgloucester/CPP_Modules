/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:01:58 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/21 20:18:06 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <Intern.hpp>

int	main(void)
{
	Bureaucrat	fabieng("Fabieng", 145);
	Intern		corenting;

	Form*		scform = corenting.makeForm("shrubbery creation", "hello");
	Form*		rrform = corenting.makeForm("robotomy request", "Bender");
	Form*		ppform = corenting.makeForm("presidential pardon", "Your mom");
	std::cout << std::endl;

	std::cout << "***Demo of the three concrete forms***" << std::endl;
	fabieng.signForm(*scform);
	fabieng.increaseGrade(8);
	fabieng.executeForm(*scform);
	std::cout << std::endl;

	fabieng.increaseGrade(65);
	fabieng.signForm(*rrform);
	fabieng.increaseGrade(27);
	fabieng.executeForm(*rrform);
	std::cout << std::endl;

	fabieng.increaseGrade(20);
	fabieng.signForm(*ppform);
	fabieng.increaseGrade(20);
	fabieng.executeForm(*ppform);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "***Demo of invalid form creation query***" << std::endl;
	try
	{
		corenting.makeForm("unknown form", "whomever");
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	delete ppform;
	delete rrform;
	delete scform;
	return (0);
}

