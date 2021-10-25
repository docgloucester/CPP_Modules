/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:42:21 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/24 16:52:57 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template<typename T>
void	swap(T& arg1, T& arg2)
{
	T	temp;

	temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

template<typename T>
T&	min(T& arg1, T& arg2)
{
	if (arg2 <= arg1)
		return arg2;
	return arg1;
}

template<typename T>
T&	max(T& arg1, T& arg2)
{
	if (arg2 >= arg1)
		return arg2;
	return arg1;
}

#endif