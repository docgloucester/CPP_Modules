/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:47:45 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/23 21:04:39 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <time.h>
#include <stdlib.h>

class Base
{
public:
	virtual ~Base()
	{
		std::cout << "Base destructor called" << std::endl;
	}
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base*	generate(void)
{
	int	random;

	srand(time(NULL));
	random = rand() % 3;
	std::cout << "Selected class " << static_cast<char>('A' + random) << std::endl;
	if (random == 0)
		return (new A);
	else if (random == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	std::cout << "Identification by pointer: ";
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout << "A" << std::endl;
	}
	if (dynamic_cast<B*>(p) != NULL)
	{
		std::cout << "B" << std::endl;
	}
	if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "C" << std::endl;
	}
}

void	identify(Base& p)
{
	std::cout << "Identification by reference: ";
	try
	{
		A&	a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast& b){}
	try
	{
		B&	b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast& b){}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast& b){}
}

int	main(void)
{
	Base*	p = generate(); 
	identify(p);
	identify(*p);
}