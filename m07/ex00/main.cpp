/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:42:24 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/24 16:53:12 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <templates.hpp>
#include <iostream>

int	main(void)
{
	int	a = 12;
	int	b = 21;
	float	x = 24.3f;
	float	y = 541.5f;
	std::string	s1("hello");
	std::string	s2("goodbye");

	std::cout << "a is " << a << " and b is " << b << std::endl;
	swap(a, b);
	std::cout << "a is " << a << " and b is " << b << std::endl << std::endl;

	std::cout << "x is " << x << " and y is " << y << std::endl;
	swap(x, y);
	std::cout << "x is " << x << " and y is " << y << std::endl << std::endl;

	std::cout << "s1 is " << s1 << " and s2 is " << s2 << std::endl;
	swap(s1, s2);
	std::cout << "s1 is " << s1 << " and s2 is " << s2 << std::endl << std::endl;

	std::cout << "min between " << a << " and " << b << " is " << min(a, b) << std::endl;
	std::cout << "min between " << y << " and " << x << " is " << min(y, x) << std::endl;
	std::cout << "min between " << x << " and " << x << " is " << min(x, x) << std::endl;
	std::cout << "min between " << s1 << " and " << s2 << " is " << min(s1, s2) << std::endl << std::endl;

	std::cout << "max between " << a << " and " << b << " is " << max(a, b) << std::endl;
	std::cout << "max between " << y << " and " << x << " is " << max(y, x) << std::endl;
	std::cout << "max between " << x << " and " << x << " is " << max(x, x) << std::endl;
	std::cout << "max between " << s1 << " and " << s2 << " is " << max(s1, s2) << std::endl;
}