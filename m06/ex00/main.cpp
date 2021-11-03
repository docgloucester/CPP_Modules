/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:33:09 by rgilles           #+#    #+#             */
/*   Updated: 2021/11/03 17:51:43 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstring>
# include <cmath>
# include <limits>

bool	is_all_digits(std::string str)
{
	std::string::iterator it = str.begin();
	while (it != str.end() && std::isdigit(*it))
		++it;
	return (!str.empty() && it == str.end());
}

int main (int argc, char **argv)
{
	char	c;
	int		i;
	float	f;
	double	d;

	if (argc != 2)
	{
		std::cout << "Please provide a C++ litteral value to cast" << std::endl;
		return (0);
	}
	std::string	arg(argv[1]);
	if (arg.length() == 3 && argv[1][0] == '\'' && argv[1][2] == '\'')
	{
		c = argv[1][1];
		i = static_cast<int>(argv[1][1]);
		f = static_cast<float>(argv[1][1]);
		d = static_cast<double>(argv[1][1]);
	}
	else if (arg.length() == 1 && (argv[1][0] < '0' || argv[1][0] > '9'))
	{
		c = argv[1][0];
		i = static_cast<int>(argv[1][0]);
		f = static_cast<float>(argv[1][0]);
		d = static_cast<double>(argv[1][0]);
	}
	else if (is_all_digits(arg))
	{
		c = static_cast<char>(strtod(argv[1], 0));
		i = static_cast<int>(strtod(argv[1], 0));
		f = static_cast<float>(strtod(argv[1], 0));
		d = static_cast<double>(strtod(argv[1], 0));
	}
	else
	{
		std::cout << arg <<" isn't a C++ litteral value" << std::endl;
		return (0);
	}

	std::cout << "char: ";
	if (d > std::numeric_limits<char>::max() || d < std::numeric_limits<char>::min() || std::isnan(d))
		std::cout << "impossible" << std::endl;
	else if (i < 32 || i > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "\'" << c << "\'" << std::endl;

	std::cout << "int: ";
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min() || std::isnan(d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;

	std::cout << "float: " << f;
	if (f - i == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;

	std::cout << "double: " << d;
	if (d - i == 0)
		std::cout << ".0";
	std::cout << std::endl;
	return (0);
}
