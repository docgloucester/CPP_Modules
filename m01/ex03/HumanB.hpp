/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 09:38:39 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/10 10:03:08 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <Weapon.hpp>

class HumanB {
public:
	HumanB(std::string _name);
	~HumanB();
	void	equipWeapon(Weapon *wp);
	void	attack(void) const;
private:
	std::string	_name;
	Weapon*		_gear;
};

#endif