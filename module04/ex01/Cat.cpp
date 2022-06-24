/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:20:05 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 14:55:08 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "define.hpp"
#include <iostream>

/*---------------------------CONSTRUCTORS-DESTRUCTOR--------------------------*/

Cat::Cat( void ) : Animal(), _brain(new Brain())
{
	std::cout << KIIRO << "Cat Default Constructor, using new for Brain" << END_COLOR << std::endl;
	this->_type = "Cat";
}

Cat::Cat( const Cat& rhs ) : Animal(rhs)
{
	std::cout << KIIRO << "Cat Copy Constructor, deepcopying Brain" << END_COLOR << std::endl;
	*this = rhs;
}

Cat::~Cat( void )
{
	std::cout << KIIRO << "Cat Destructor, also deleting Brain" << END_COLOR << std::endl;
	delete _brain;
}

/*-----------------------------OPERATORS-OVERLOADS-----------------------------*/

Cat& Cat::operator=( const Cat& rhs )
{
	this->_brain = new Brain(*rhs._brain); // deep copy
//	this->_brain = rhs._brain;
	// shallow copy version : this->_brain = rhs._brain ERROR !!!
	
	this->_type = rhs.getType();

	return *this;
}

/*----------------------------OTHER-MEMBER-FUNCTIONS---------------------------*/

void	Cat::makeSound( void ) const
{
	std::cout << KIIRO << "meow meow" << END_COLOR << std::endl;
}

Brain*	Cat::getBrain( void )
{
	return this->_brain;
}
