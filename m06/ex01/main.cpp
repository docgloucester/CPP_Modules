/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:31:44 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/23 20:38:29 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data
{
	std::string string;
};

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

int main (void)
{
	Data data = {"blabla"};

	uintptr_t pointer = serialize(&data);
	Data *res = deserialize(pointer);

	std::cout << "data string: " << data.string << std::endl;
	std::cout << "data address: " << &data << std::endl;
	std::cout << "uintptr value: " << pointer << std::endl;
	std::cout << "new data pointer: " << res << std::endl;
	std::cout << "res str: " << res->string << std::endl;
}