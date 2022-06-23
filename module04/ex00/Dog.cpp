/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:20:05 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 10:24:36 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp" // includes Animal.hpp: <string.hpp>
#include "define.hpp"
#include <iostream>

/*---------------------------CONSTRUCTORS-DESTRUCTOR--------------------------*/

Dog::Dog( void ) : Animal()
{
	std::cout << AIZOME << "Dog Default Constructor" << END_COLOR << std::endl;
	this->_type = "Dog";
}

Dog::Dog( const Dog& rhs ) : Animal()
{
	std::cout << AIZOME << "Dog Copy Constructor" << END_COLOR << std::endl;
	*this = rhs;
}

Dog::~Dog( void )
{
	std::cout << AIZOME << "Dog Destructor" << END_COLOR << std::endl;
}

/*-----------------------------OPERATORS-OVERLOADS-----------------------------*/

Dog& Dog::operator=( const Dog& rhs )
{
	this->_type = rhs.getType();

	return *this;
}

/*----------------------------OTHER-MEMBER-FUNCTIONS---------------------------*/

void	Dog::makeSound( void ) const
{
	std::cout << AIZOME << "woof woof" << END_COLOR << std::endl;
}
