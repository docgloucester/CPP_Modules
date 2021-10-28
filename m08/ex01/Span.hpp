/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 02:07:53 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/26 20:09:05 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <exception>
# include <algorithm>

class Span
{
public:
	Span(unsigned int n = 0);
	Span(const Span& src);
	~Span();

	const Span&		operator=(const Span& src);
	unsigned int	getCapa(void);
	unsigned int	getSize(void);
	void			addNumber(int to_add);
	void			addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
	void			addVector(std::vector<int>);
	int				shortestSpan(void);
	int				longestSpan(void);
	struct SpanFullException : public std::exception
	{
		const char*	what() const throw()
		{
			return ("Exception : maximum capacity already reached");
		}
	};
	struct SpanComputeImpossible : public std::exception
	{
		const char*	what() const throw()
		{
			return ("Exception : not enough numbers");
		}
	};
private:
	std::vector<int>	_ints;
	unsigned int		_capa;
};

#endif