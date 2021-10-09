/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:57:38 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/09 17:47:31 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <ClapTrap.hpp>

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& src);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& rhm);
	void		highFivesGuys(void);
};

#endif