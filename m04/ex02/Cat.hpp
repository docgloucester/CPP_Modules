/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:55 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 15:21:34 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <AAnimal.hpp>

class Cat : public AAnimal
{
public:
	Cat();
	Cat(const Cat& src);
	virtual ~Cat();
	Cat&	operator=(const Cat& src);

	virtual void	makeSound() const;
};

#endif