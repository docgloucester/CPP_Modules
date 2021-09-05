/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:04:33 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/05 16:07:51 by rgilles          ###   ########.fr       */
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
	if (this->contactCount < 8)
	{
		this->myContacts[this->contactCount] = new Contact("Thierry", "Martin", "Titou", "9050", "has a Sonic furry fetish");
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
