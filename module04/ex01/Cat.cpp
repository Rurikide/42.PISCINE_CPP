/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:20:05 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 19:15:05 by tshimoda         ###   ########.fr       */
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

Cat::Cat( const Cat& rhs ) : Animal(rhs), _brain(new Brain(*rhs._brain)) // brain
{
	std::cout << KIIRO << "Cat Copy Constructor, deepcopying Brain" << END_COLOR << std::endl;
	//*this = rhs; // cat
}

Cat::~Cat( void )
{
	std::cout << KIIRO << "Cat Destructor, also deleting Brain" << END_COLOR << std::endl;
	delete _brain;
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

Brain*	Cat::getBrain( void )
{
	return this->_brain;
}
