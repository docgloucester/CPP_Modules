/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:46:19 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/09 17:47:50 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <ScavTrap.hpp>
# include <FragTrap.hpp>

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap(const std::string& _name);
	DiamondTrap(const DiamondTrap& src);
	~DiamondTrap();
	DiamondTrap&	operator=(const DiamondTrap& rhm);
	void			whoAmI();
private:
	std::string _name;
};

#endif