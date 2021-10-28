/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:39 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 16:56:36 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{
public:
	AAnimal();
	AAnimal(const AAnimal& src);
	virtual ~AAnimal();
	AAnimal&	operator=(const AAnimal& src);

	std::string		getType() const;
	virtual void	makeSound() const = 0;
protected:
	std::string	_type;
};

#endif