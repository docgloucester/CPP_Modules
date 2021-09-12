/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:17:32 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/11 12:34:00 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char** argv)
{
	std::fstream	input;
	std::fstream	output;

	if (argc != 4)
		std::cout << "replace-o'matic: syntax error: number of arguments isn't 4" << std::endl;
	if (*argv[2] == 0 || *argv[3] == 0)
		std::cout << "replace-o'matic: error: empty strings provided" << std::endl;
	input.open(argv[1], std::ios::in);
	if (!input)
		std::cout << "replace-o'matic: error opening file " << argv[1] << std::endl;
	output.open(argv[1] << ".replace")
	if (!output)
		std::cout << "replace-o'matic: error creating file " << argv[1] << ".replace" << std::endl;
}