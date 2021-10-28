/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:47 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/29 01:57:08 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <AAnimal.hpp>

class Dog : public AAnimal
{
public:
	Dog();
	Dog(const Dog& src);
	virtual ~Dog();
	Dog&	operator=(const Dog& src);

	virtual void	makeSound() const;	
};

#endif