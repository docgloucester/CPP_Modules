/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 02:07:57 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/28 15:33:20 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span(unsigned int n) : _capa(n) {}

Span::Span(const Span& src) 
{
	*this = src;
}

Span::~Span() {}

const Span& Span::operator=(const Span& src) 
{
	if (&src != this)
	{
		this->_capa = src._capa;
		this->_ints = src._ints;
	}
	return (*this);
}

unsigned int Span::getCapa(void) 
{
	return (this->_capa);
}

unsigned int Span::getSize(void) 
{
	return (this->_ints.size());
}

void Span::addNumber(int to_add) 
{
	if (this->_ints.size() < this->_capa)
		_ints.push_back(to_add);
	else
		throw Span::SpanFullException();
}

void	Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end) 
{
	for (std::vector<int>::iterator it = start; it != end; ++it)
	{
		if (this->_ints.size() == this->_capa)
			throw Span::SpanFullException();
		this->_ints.push_back(*it);
	}
}

void	Span::addVector(std::vector<int> vec) {this->addNumbers(vec.begin(), vec.end());}

int	getSpan(const int upper, const int lower) {return (upper - lower);}

int	Span::shortestSpan(void) 
{
	if (this->_ints.size() > 1)
	{
		std::vector<int>	sorted(this->_ints);
		std::vector<int>	spans(this->_ints.size() - 1);

		std::sort(sorted.begin(), sorted.end());
		std::transform(++sorted.begin(), sorted.end(), sorted.begin(), spans.begin(), &getSpan);
		return (*std::min_element(spans.begin(), spans.end()));
	}
	throw Span::SpanComputeImpossible();
}

int	Span::longestSpan(void) 
{
	if (this->_ints.size() > 1)
	{
		return (*std::max_element(this->_ints.begin(), this->_ints.end())
			- *std::min_element(this->_ints.begin(), this->_ints.end()));
	}
	throw Span::SpanComputeImpossible();
}