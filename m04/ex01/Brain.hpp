/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:35:00 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 16:25:32 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain& src);
	~Brain();
	Brain&		operator=(const Brain& src);

	void		writeIdea(int i, std::string idea);
	std::string	readIdea(int i) const;
private:
	std::string	_ideas[100];
};

#endif