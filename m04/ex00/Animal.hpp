/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:39 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 14:37:18 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
public:
	Animal();
	Animal(const Animal& src);
	virtual ~Animal();
	Animal&	operator=(const Animal& src);

	std::string	getType() const;
	virtual void		makeSound() const;
protected:
	std::string	_type;
};

#endif