/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:23:51 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/26 01:59:13 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <algorithm>

struct NotInContainerException : public std::exception
{
	const char*	what() const throw()
	{
		return ("Integer not in container.");
	}	
};

template<typename T>
int	easyfind(T& container, const int to_find)
{
	typename T::iterator	i = std::find(container.begin(), container.end(), to_find);
	
	if (i == container.end())
		throw NotInContainerException();
	return (*i);
}