/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:53:15 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/29 20:47:23 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <AMateria.hpp>
# include <ICharacter.hpp>

class Cure : public AMateria
{
public:
	Cure();
	virtual ~Cure();
	virtual Cure*	clone() const;
	virtual void	use(ICharacter& target);
};

#endif