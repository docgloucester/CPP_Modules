/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:57:38 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/08 16:49:40 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <ClapTrap.hpp>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& src);
	~ScavTrap();

	ScavTrap&	operator=(const ScavTrap& rhm);
	void		guardGate();
	void		attack(const std::string& target);
};

#endif