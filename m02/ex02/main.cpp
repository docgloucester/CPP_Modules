/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:58:02 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/06 03:50:41 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Fixed.hpp>

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(850.80f) / Fixed(2));
	Fixed c;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a++ << std::endl;

	std::cout << b.toInt() << std::endl;
	std::cout << b << std::endl;
	c = b * Fixed(2);
	std::cout << c << std::endl;
	c = c + Fixed(5);
	std::cout << c << std::endl;
	c = c - Fixed(15.3f);
	std::cout << c << std::endl;
	std::cout << "Max between a and b is " << Fixed::max(a, b) << std::endl;
	std::cout << "Max between a and b is " << max(a, b) << std::endl;
	std::cout << "Min between a and b is " << Fixed::min(a, b) << std::endl;
	std::cout << "Min between a and b is " << min(a, b) << std::endl;

	std::cout << (Fixed(4) < Fixed(5)) << std::endl;
	std::cout << (Fixed(4) < Fixed(4)) << std::endl;
	std::cout << (Fixed(4) < Fixed(3)) << std::endl << std::endl;
	std::cout << (Fixed(4) <= Fixed(5)) << std::endl;
	std::cout << (Fixed(4) <= Fixed(4)) << std::endl;
	std::cout << (Fixed(4) <= Fixed(3)) << std::endl << std::endl;

	std::cout << (Fixed(4) > Fixed(5)) << std::endl;
	std::cout << (Fixed(4) > Fixed(4)) << std::endl;
	std::cout << (Fixed(4) > Fixed(3)) << std::endl << std::endl;
	std::cout << (Fixed(4) >= Fixed(5)) << std::endl;
	std::cout << (Fixed(4) >= Fixed(4)) << std::endl;
	std::cout << (Fixed(4) >= Fixed(3)) << std::endl << std::endl;

	std::cout << (Fixed(4) == Fixed(5)) << std::endl;
	std::cout << (Fixed(4) == Fixed(4)) << std::endl << std::endl;
	std::cout << (Fixed(4) != Fixed(5)) << std::endl;
	std::cout << (Fixed(4) != Fixed(4)) << std::endl;
	return (0);
}
