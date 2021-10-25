/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:27:21 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/24 17:30:58 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iter.hpp>

int	main()
{
	int	array[] = {1, 2, 15, 44};

	iter(array, 4, print);
	std::cout << std::endl;
	iter(array, 4, increment);
	iter(array, 4, print);
	std::cout << std::endl;

	float	arrayf[] = {21.3, 2.0, 45.35, 512};

	iter(arrayf, 4, print);
	std::cout << std::endl;
	iter(arrayf, 4, increment);
	iter(arrayf, 4, print);
	std::cout << std::endl;

	std::string	arrays[] = {"hello", "goodbye"};

	iter(arrays, 2, print);
}