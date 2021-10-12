/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:47 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 15:21:39 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <Animal.hpp>

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& src);
	virtual ~Dog();
	Dog&	operator=(const Dog& src);

	virtual void	makeSound() const;	
};

#endif