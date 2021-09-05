/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:04:06 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/05 16:10:04 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn,
	std::string ds) : FirstName(fn), LastName(ln), Nickname(nn), PhoneNumber(pn), DarkestSecret(ds)
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
