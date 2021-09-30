/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:33:16 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/29 14:33:19 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Karen.hpp>

int	main(void)
{
	Karen	karen;
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	karen.complain("invalid");
}