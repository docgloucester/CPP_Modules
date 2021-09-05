/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:04:17 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/05 16:07:56 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

int	main(void)
{
	std::string	cmd;
	PhoneBook	mybook;

	cmd = "";
	std::cout	<< "Welcome to your very own and very high-tech phone book!"
				<< std::endl;
	while (cmd != "EXIT")
	{
		std::cout << "Please enter a command below :" << std::endl << "> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			mybook.addContact();
		else if (cmd == "SEARCH")
		{
			mybook.listContacts();
		}
		else if (cmd != "EXIT")
			std::cout << "Please enter a valid command." << std::endl;
	}
	return (0);
}
