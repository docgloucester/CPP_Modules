/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:18:35 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/21 17:38:29 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
	
}

void ShrubberyCreationForm::launchAction(void) const 
{
	if (this->_target.empty())
		throw ShrubberyCreationForm::NoTargetException();
	else
	{
		std::ofstream	output;
		std::string		output_name;
		std::string		file;

		output_name = this->_target;
		output_name += "_shrubbery";
		output.open(output_name.c_str(), std::fstream::out|std::fstream::trunc);
		if (!output.is_open())
			std::cout << "replace: error creating file " << output_name << std::endl;
		file = "      /\\      \n     /\\*\\     \n    /\\O\\*\\    \n   /*/\\/\\/\\   \n  /\\O\\/\\*\\/\\  \n /\\*\\/\\*\\/\\/\\ \n/\\O\\/\\/*/\\/O/\\\n      ||      \n      ||      \n      ||\n\n";
		output << file;
		output << file;
		output.close();
	}
}