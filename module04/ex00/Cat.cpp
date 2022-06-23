/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:20:05 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 10:23:40 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp" // includes Animal.hpp: <string.hpp>
#include "define.hpp"
#include <iostream>

/*---------------------------CONSTRUCTORS-DESTRUCTOR--------------------------*/

Cat::Cat( void ) : Animal()
{
	std::cout << KIIRO << "Cat Default Constructor" << END_COLOR << std::endl;
	this->_type = "Cat";
}

Cat::Cat( const Cat& rhs ) : Animal()
{
	std::cout << KIIRO << "Cat Copy Constructor" << END_COLOR << std::endl;
	*this = rhs;
}

Cat::~Cat( void )
{
	std::cout << KIIRO << "Cat Destructor" << END_COLOR << std::endl;
}

/*-----------------------------OPERATORS-OVERLOADS-----------------------------*/

Cat& Cat::operator=( const Cat& rhs )
{
	this->_type = rhs.getType();

	return *this;
}

/*----------------------------OTHER-MEMBER-FUNCTIONS---------------------------*/

void	Cat::makeSound( void ) const
{
	std::cout << KIIRO << "meow meow" << END_COLOR << std::endl;
}
