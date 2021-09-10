/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 09:38:31 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/10 10:03:07 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <Weapon.hpp>

class HumanA {
public:
	HumanA(std::string name, Weapon wp);
	~HumanA();
	void	attack(void) const;
private:
	std::string _name;
	Weapon	_gear;
};

#endif