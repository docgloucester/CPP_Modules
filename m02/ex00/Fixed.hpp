/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:57:52 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/30 16:41:47 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed& src);
	Fixed& operator=(const Fixed& src);
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(const int raw);
private:
	int					_raw;
	static const int	_nbFracBits = 8;
};

#endif