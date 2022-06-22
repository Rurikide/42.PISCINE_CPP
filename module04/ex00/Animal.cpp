/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:21:57 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/22 13:44:23 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "define.hpp"
#include <iostream>

/*---------------------------CONSTRUCTORS-DESTRUCTOR---------------------------*/

Animal::Animal( void ) : _type("Dog")
{
	std::cout << MIDORI << "Animal Default Constructor" << END_COLOR << std::endl
}

Animal::Animal( const Animal& rhs )
{
	std::cout << MIDORI << "Animal Copy Constructor" << END_COLOR << std::endl;
	*this = rhs;
}

Animal::Animal( const std::string type ) : _type(type)
{
	std::cout << MIDORI << "Animal Type Constructor" << END_COLOR << std::endl;
}

Animal::~Animal( void )
{
	std::cout << MIDORI << "Animal Destructor" << END_COLOR << std::endl;
}

/*-----------------------------OPERATORS-OVERLOADS-----------------------------*/

Animal& Animal::operator=( const Animal& rhs )
{
	this->_type = rhs.getType();

	return *this;
}

/*-----------------------------------GETTERS-----------------------------------*/

std::string	Animal::getType( void ) const { return this->_type }

/*-----------------------------------SETTERS-----------------------------------*/

void	Animal::setType( const std::string type ) { this->_type = type; }

/*----------------------------OTHER-MEMBER-FUNCTIONS---------------------------*/

virtual void	Animal::makeSound( void ) const
{
	std::cout << MIDORI << "*indiscernible animal noise*" << END_COLOR :: std::endl;
}

