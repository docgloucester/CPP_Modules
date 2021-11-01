/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:54:41 by rgilles           #+#    #+#             */
/*   Updated: 2021/11/01 14:14:32 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <ICharacter.hpp>

class Character : public ICharacter
{
public:
	Character(std::string name);
	Character(const Character& src);
	const Character&			operator=(const Character& src);
	virtual ~Character();
	virtual const std::string&	getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual AMateria*			getMateria(int idx);
	virtual void				use(int idx, ICharacter& target);
private:
	const std::string	_name; 
	AMateria*			_slots[4];
};

#endif