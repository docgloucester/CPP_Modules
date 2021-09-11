/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 00:51:47 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/11 10:48:42 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string		hi;
	std::string*	stringPTR;

	hi = "HI THIS IS BRAIN";
	stringPTR = &hi;
	std::string &stringREF = hi;

	std::cout << "___ADDRESSES___" << std::endl;
	std::cout << "Address of string: " << &hi << std::endl;
	std::cout << "Address in the pointer: " << (void*)stringPTR
		<< ", himself being at address " << &stringPTR << std::endl;
	std::cout << "Address of reference: " << &stringREF << std::endl;

	std::cout << "____DISPLAY____" << std::endl;
	std::cout << "directly: " << hi << std::endl;
	std::cout << "via pointer: " << *stringPTR << std::endl;
	std::cout << "via reference: " << stringREF << std::endl;
}