/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:04:17 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/05 20:40:03 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

int	main(void)
{
	std::string	cmd;
	int			id;
	PhoneBook	mybook;

	cmd = "";
	std::cout	<< "Welcome to your very own and very high-tech phone book!"
				<< std::endl;
	while (cmd != "EXIT")
	{
		std::cout << "debug" << cmd << std::endl;
		std::cout << "Please enter a command belowwww :" << std::endl << "> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			mybook.addContact();
		else if (cmd == "SEARCH")
		{
			mybook.listContacts();
			std::cout << "Enter desired contact ID:" << std::endl << "> ";
			std::cin >> id;
			mybook.displayContact(id);
		}
		else if (cmd != "EXIT")
			std::cout << "Please enter a valid command." << std::endl;
	}
	return (0);
}
