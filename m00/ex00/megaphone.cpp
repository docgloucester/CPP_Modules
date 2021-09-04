/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:48:09 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/04 14:48:10 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_str_upper(char *str)
{
	char	c;

	while (str && *str != 0)
	{
		c = *str++;
		if (c >= 'a' && c <= 'z')
			c -= 32;
		std::cout << c;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
			print_str_upper(argv[i]);
	std::cout << std::endl;
	return (0);
}
