/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:57:52 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/06 04:26:18 by rgilles          ###   ########.fr       */
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

	Fixed		operator+(const Fixed& rhm) const;
	Fixed		operator-(const Fixed& rhm) const;
	Fixed		operator*(const Fixed& rhm) const;
	Fixed		operator/(const Fixed& rhm) const;

	Fixed&		operator++(void);
	Fixed&		operator--(void);
	Fixed		operator++(int);
	Fixed		operator--(int);


	bool		operator<(const Fixed& rhm) const;
	bool		operator>(const Fixed& rhm) const;
	bool		operator<=(const Fixed& rhm) const;
	bool		operator>=(const Fixed& rhm) const;
	bool		operator==(const Fixed& rhm) const;
	bool		operator!=(const Fixed& rhm) const;



	static const Fixed&	min(const Fixed& n1, const Fixed& n2);
	static const Fixed&	max(const Fixed& n1, const Fixed& n2);

	int			getRawBits(void) const;
	void		setRawBits(const int raw);
	float		toFloat(void) const;
	int			toInt(void) const;
private:
	int					_raw;
	static const int	_nbFracBits = 8;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& number);
const Fixed&	min(const Fixed& n1, const Fixed& n2);
const Fixed&	max(const Fixed& n1, const Fixed& n2);


#endif