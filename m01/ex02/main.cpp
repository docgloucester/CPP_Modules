/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 00:51:47 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/09 01:00:32 by rgilles          ###   ########.fr       */
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
}