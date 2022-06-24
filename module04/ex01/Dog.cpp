/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:20:05 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 14:49:49 by tshimoda         ###   ########.fr       */
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

Dog::Dog( const Dog& rhs ) : Animal(rhs)
{
	std::cout << AIZOME << "Dog Copy Constructor, deepcopying Brain" << END_COLOR << std::endl;
	*this = rhs;
}

Dog::~Dog( void )
{
	std::cout << AIZOME << "Dog Destructor, also deleting Brain" << END_COLOR << std::endl;
	delete _brain;
}

/*-----------------------------OPERATORS-OVERLOADS-----------------------------*/

Dog& Dog::operator=( const Dog& rhs )
{
	this->_brain = new Brain(*rhs._brain); // deep copy

	// shallow copy version : this->_brain = rhs._brain ERROR!!!
	
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
