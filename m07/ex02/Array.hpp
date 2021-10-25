/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:56:30 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/24 23:55:30 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
public:
	Array<T>() : _size(0) {};
	Array<T>(unsigned int n) : _size(n), _array(new T[n]) {};
	Array<T>(const Array<T>& src) : _size(0) {*this = src;};
	~Array<T>() {delete [] this->_array;};

	Array<T>&	operator=(const Array<T>& src)
	{
		if (&src != this)
		{
			if (this->_size)
				delete [] this->_array;
			this->_size = src._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				(*this)[i] = src[i];
		}
		return (*this);
	};
	T&			operator[](const unsigned int i) const
	{
		if (i >= 0 && i < this->_size)
			return this->_array[i];
		throw	Array::OutOfBoundsException();
	};
	unsigned int	size(void) const {return this->_size;};
	struct OutOfBoundsException : public std::exception
	{
		const char*	what() const throw() {return ("Invalid index for array");}
	};
private:
	unsigned int	_size;
	T*				_array;
};

#endif