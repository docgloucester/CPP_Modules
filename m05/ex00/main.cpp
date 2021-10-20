/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:01:58 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/20 16:17:12 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

int	main(void)
{
	Bureaucrat	unnamed;
	Bureaucrat	marcel("Marcel", 150);
	Bureaucrat	jean_gui("Jean-Guillaume", 1);
	std::cout << std::endl;
	
	std::cout << "***Exception at creation demo***" << std::endl;
	try
	{
		Bureaucrat	nulos("Nulos", 170);
	}
	catch (std::exception& e)
	{
		std::cout << e.what()<< std::endl;
	}

	try
	{
		Bureaucrat	nulos2("Nulos", 0);
	}
	catch (std::exception& e)
	{
		std::cout << e.what()<< std::endl;
	}
	std::cout << std::endl;


	std::cout << "***Exception at increasing demo***" << std::endl;
	marcel.increaseGrade(100);
	try
	{
		marcel.increaseGrade(100);
	}
	catch (std::exception& e)
	{
		std::cout << e.what()<< std::endl;
	}
	std::cout << marcel << std::endl;
	std::cout << std::endl;


	std::cout << "***Exception at decreasing demo***" << std::endl;
	jean_gui.decreaseGrade(100);
	try
	{
		jean_gui.decreaseGrade(100);
	}
	catch (std::exception& e)
	{
		std::cout << e.what()<< std::endl;
	}
	std::cout << jean_gui << std::endl;
	std::cout << std::endl;
	
	return (0);
}