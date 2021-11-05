/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:27:21 by rgilles           #+#    #+#             */
/*   Updated: 2021/11/05 16:40:13 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iter.hpp>

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) {return;}
	int get( void ) const {return this->_n;}
	Awesome&	operator++(void) {++this->_n; return(*this);}
private:
	int _n;
};
std::ostream & operator<<(std::ostream& o, const Awesome& rhs ) {o << rhs.get(); return o;}

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
	std::cout << std::endl;

	Awesome tab[5];
	iter(tab, 5, print);
	std::cout << std::endl;
	iter(tab, 5, increment);
	iter(tab, 5, print);
}