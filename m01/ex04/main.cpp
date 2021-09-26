/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:17:32 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/26 19:18:26 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	sanitize_input(std::ifstream& input, std::ofstream& output, int argc, char** argv)
{
	std::string		output_name;

	if (argc != 4)
	{
		std::cout << "replace: syntax error: number of arguments isn't 4" << std::endl;
		return (1);
	}
	if (*argv[2] == 0 || *argv[3] == 0)
	{
		std::cout << "replace: error: empty strings provided" << std::endl;
		return (1);
	}
	input.open(argv[1], std::fstream::in);
	if (!input.is_open())
	{
		std::cout << "replace: error opening file " << argv[1] << std::endl;
		return (1);
	}
	output_name = argv[1];
	output_name += ".replace";
	output.open(output_name.c_str(), std::fstream::out|std::fstream::trunc);
	if (!output.is_open())
	{
		std::cout << "replace: error creating file " << argv[1] << ".replace" << std::endl;
		input.close();
		return (1);
	}
	return (0);
}

int	main(int argc, char** argv)
{
	std::ifstream		input;
	std::ostringstream	input_to_file;
	std::ofstream		output;
	std::string			file;
	std::size_t			pos;

	if (sanitize_input(input, output, argc, argv))
		return (1);
	input_to_file << input.rdbuf();
	file = input_to_file.str();
	input.close();
	while ((pos = file.find(argv[2])) != std::string::npos)
	{
		file.erase(pos, std::string(argv[2]).size());
		file.insert(pos, argv[3]);
	}
	output << file;
	output.close();
	return (0);
}