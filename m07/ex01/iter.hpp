/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:01:48 by rgilles           #+#    #+#             */
/*   Updated: 2021/11/05 16:41:03 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void	iter(T* array, int len, void (*func)(T&))
{
	for (int i = 0; i < len; i++)
		func(array[i]);
}

template<typename T>
void	print(T& elem)
{
	std::cout << elem << std::endl;
}

template<typename T>
void	increment(T& elem)
{
	++elem;
}

#endif