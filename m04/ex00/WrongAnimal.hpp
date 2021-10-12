/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:57:07 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 15:21:43 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	virtual ~WrongAnimal();
	WrongAnimal&	operator=(const WrongAnimal& src);

	std::string	getType() const;
	void		makeSound() const;
protected:
	std::string	_type;
};

#endif