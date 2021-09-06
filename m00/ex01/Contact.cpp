/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:04:06 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/06 19:29:51 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

Contact::Contact()
{

}

Contact::~Contact(void)
{

}

void		Contact::fillFields(std::string *strs)
{
	this->FirstName = strs[0];
	this->LastName = strs[1];
	this->Nickname = strs[2];
	this->PhoneNumber = strs[3];
	this->DarkestSecret = strs[4];
}

std::string	Contact::getField(int field) const
{
	switch (field)
	{
		case 0:
			return (this->FirstName);
		case 1:
			return (this->LastName);
		case 2:
			return (this->Nickname);
		case 3:
			return (this->PhoneNumber);
		case 4:
			return (this->DarkestSecret);
		default:
			return "";
	}
}
