/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:57:38 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/09 13:44:47 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <ClapTrap.hpp>

class FragTrap : public ClapTrap
{
public:
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& src);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& rhm);
	void		highFivesGuys(void);
};

#endif