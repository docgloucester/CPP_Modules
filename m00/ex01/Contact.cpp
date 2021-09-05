/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:04:06 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/05 20:27:31 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

Contact::Contact(std::string *strs) : FirstName(strs[0]), LastName(strs[1]),
	Nickname(strs[2]), PhoneNumber(strs[3]), DarkestSecret(strs[4])
{

}

Contact::~Contact(void)
{

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
