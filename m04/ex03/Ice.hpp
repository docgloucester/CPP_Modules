/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:53:08 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/29 20:48:40 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <AMateria.hpp>
# include <ICharacter.hpp>

class Ice : public AMateria
{
public:
	Ice();
	virtual ~Ice();
	virtual Ice*	clone() const;
	virtual void	use(ICharacter& target);
};

#endif