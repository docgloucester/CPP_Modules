/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:04:42 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/06 19:22:02 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <Contact.hpp>

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();

	void	addContact(void);
	void	listContacts(void);
	void	displayContact(int id);

private:
	Contact	myContacts[8];
	int		contactCount;
};

#endif