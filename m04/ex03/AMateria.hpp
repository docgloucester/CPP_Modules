/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:31:33 by rgilles           #+#    #+#             */
/*   Updated: 2021/11/01 14:28:31 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <ICharacter.hpp>

class ICharacter;

class AMateria
{
public:
	AMateria(const std::string& type);
	AMateria(const AMateria& src);
	virtual ~AMateria();
	AMateria&			operator=(const AMateria& src);

	const std::string&	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target) = 0;
protected:
	std::string	_type;
};

#endif