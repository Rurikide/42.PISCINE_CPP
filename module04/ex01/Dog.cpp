/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:20:05 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 15:58:44 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Dog.hpp"
#include "define.hpp"
#include <iostream>

/*---------------------------CONSTRUCTORS-DESTRUCTOR--------------------------*/

Dog::Dog( void ) : Animal(), _brain(new Brain())
{
	std::cout << AIZOME << "Dog Default Constructor, using new for Brain" << END_COLOR << std::endl;
	this->_type = "Dog";
}

Dog::Dog( const Dog& rhs ) : Animal(rhs), _brain(new Brain()) // brain
{
	std::cout << AIZOME << "Dog Copy Constructor, deepcopying Brain" << END_COLOR << std::endl;
	//*this = rhs; // dog
}

Dog::~Dog( void )
{
	std::cout << AIZOME << "Dog Destructor deleting Brain" << END_COLOR << std::endl;
	delete _brain;
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

Brain*	Dog::getBrain( void )
{
	return this->_brain;
}
