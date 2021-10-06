/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 04:23:45 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/06 04:27:50 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap& src);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap& rhm);
private:
	std::string _name;
	
};

#endif