/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:04:33 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/05 20:35:12 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

PhoneBook::PhoneBook(void) : contactCount(0)
{

}

PhoneBook::~PhoneBook(void)
{

}

void	PhoneBook::addContact(void)
{
	std::string	fields[5];

	if (this->contactCount < 8)
	{
		std::cout << "Please enter your contact's first name:" << std::endl << "> ";
		std::getline(std::cin, fields[0]);
		std::cout << "Please enter your contact's last name:" << std::endl << "> ";
		std::getline(std::cin, fields[1]);
		std::cout << "Please enter your contact's nickname:" << std::endl << "> ";
		std::getline(std::cin, fields[2]);
		std::cout << "Please enter your contact's phone number:" << std::endl << "> ";
		std::getline(std::cin, fields[3]);
		std::cout << "Any gossip? (:" << std::endl << "> ";
		std::getline(std::cin, fields[4]);
		this->myContacts[this->contactCount] = new Contact(fields);
		this->contactCount++;
		return ;
	}
	std::cout << "Max number of contacts reached ! Have fun with your 8 contacts." << std::endl;
}

void	PhoneBook::listContacts(void)
{
	std::cout << "Index     |First Name|Last Name |Nickname  " << std::endl;
	for (int i = 0; i < contactCount; i++)
	{
		std::cout << "placeholder |";
		std::cout << std::endl;
	}
}

void	PhoneBook::displayContact(int id)
{
	if (id <= this->contactCount)
	{
		std::cout << "First Name: " << this->myContacts[id]->getField(0) << std::endl;
		std::cout << "Last Name: " << this->myContacts[id]->getField(1) << std::endl;
		std::cout << "Nickname: " << this->myContacts[id]->getField(2) << std::endl;
		std::cout << "Phone Nr: " << this->myContacts[id]->getField(3) << std::endl;
		std::cout << "Darkest Secret: " << this->myContacts[id]->getField(4) << std::endl;
	}
	else
		std::cout << "Invalid contact ID" << std::endl;
}
