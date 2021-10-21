/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:01:58 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/21 18:11:42 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int	main(void)
{
	Bureaucrat	marcel("Marcel", 145);
	Form*		scform = new ShrubberyCreationForm("hello");
	Form*		rrform = new RobotomyRequestForm("Bender");
	Form*		ppform = new PresidentialPardonForm("Your mom");
	std::cout << std::endl;

	std::cout << "***Demo of the three concrete forms***" << std::endl;
	marcel.signForm(*scform);
	marcel.increaseGrade(8);
	marcel.executeForm(*scform);
	std::cout << std::endl;

	marcel.increaseGrade(65);
	marcel.signForm(*rrform);
	marcel.increaseGrade(27);
	marcel.executeForm(*rrform);
	std::cout << std::endl;

	marcel.increaseGrade(20);
	marcel.signForm(*ppform);
	marcel.increaseGrade(20);
	marcel.executeForm(*ppform);
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << "***Exception at executing demo***" << std::endl;
	std::cout << "**Executing form with exec grade too low**" << std::endl;
	Bureaucrat	weakermarcel("Weaker Marcel", 145);
	weakermarcel.executeForm(*ppform);
	std::cout << std::endl;

	std::cout << "**Executing unsigned form**" << std::endl;
	Form*	unsignedppform = new PresidentialPardonForm("Your dad");
	marcel.executeForm(*unsignedppform);
	delete unsignedppform;
	std::cout << std::endl;
	
	std::cout << "**Executing targetless form**" << std::endl;
	Form*	fakeppform = new PresidentialPardonForm;
	marcel.signForm(*fakeppform);
	marcel.executeForm(*fakeppform);
	delete fakeppform;
	std::cout << std::endl;

	delete ppform;
	delete rrform;
	delete scform;
	return (0);
}

