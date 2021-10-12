/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:57:13 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 15:21:48 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& src);
	virtual ~WrongCat();
	WrongCat&	operator=(const WrongCat& src);

	void	makeSound() const;
	
};

#endif