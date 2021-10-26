/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:23:58 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/26 02:00:07 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>
#include <iostream>
#include <list>
#include <vector>

int	main(void)
{
	std::list<int>	mylist;

	mylist.push_back(15);
	mylist.push_back(21);
	mylist.push_back(0);
	mylist.push_back(-12);
	mylist.push_back(9655210);

	std::cout << easyfind(mylist, 9655210) << std::endl;
	std::cout << easyfind(mylist, -12) << std::endl;
	std::cout << easyfind(mylist, 0) << std::endl;
	std::cout << easyfind(mylist, 21) << std::endl;
	std::cout << easyfind(mylist, 15) << std::endl;
	try
	{
		std::cout << easyfind(mylist, -42) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::vector<int>	myvector;

	myvector.push_back(15);
	myvector.push_back(21);
	myvector.push_back(0);
	myvector.push_back(-12);
	myvector.push_back(9655210);

	std::cout << easyfind(myvector, 9655210) << std::endl;
	std::cout << easyfind(myvector, -12) << std::endl;
	std::cout << easyfind(myvector, 0) << std::endl;
	std::cout << easyfind(myvector, 21) << std::endl;
	std::cout << easyfind(myvector, 15) << std::endl;
	try
	{
		std::cout << easyfind(myvector, -42) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}