/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:57:52 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/04 12:41:15 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed& src);
	Fixed(const int integer);
	Fixed(const float floating);
	~Fixed();

	Fixed&		operator=(const Fixed& src);
	int			getRawBits(void) const;
	void		setRawBits(const int raw);
	float		toFloat(void) const;
	int			toInt(void) const;
private:
	int					_raw;
	static const int	_nbFracBits = 8;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& number);
bool			operator<(const Fixed& n1, const Fixed& n2);
bool			operator>(const Fixed& n1, const Fixed& n2);
bool			operator<=(const Fixed& n1, const Fixed& n2);
bool			operator>=(const Fixed& n1, const Fixed& n2);
bool			operator==(const Fixed& n1, const Fixed& n2);
bool			operator!=(const Fixed& n1, const Fixed& n2);


#endif