/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:47 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/12 16:26:25 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <Animal.hpp>
# include <Brain.hpp>

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& src);
	virtual ~Dog();
	Dog&	operator=(const Dog& src);

	virtual void	makeSound() const;
	void	readIdea(int i);
	void	writeIdea(int i, std::string idea);
private:
	Brain*	_brain;
};

#endif