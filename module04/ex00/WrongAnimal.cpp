/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:21:57 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 12:06:19 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp" // includes <string
#include "define.hpp"
#include <iostream>

/*---------------------------CONSTRUCTORS-DESTRUCTOR---------------------------*/

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
	std::cout << MURASAKI << "WrongAnimal Default Constructor" << END_COLOR << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& rhs )
{
	std::cout << MIDORI << "WrongAnimal Copy Constructor" << END_COLOR << std::endl;
	*this = rhs;
}

WrongAnimal::WrongAnimal( const std::string type ) : _type(type)
{
	std::cout << MURASAKI << "WrongAnimal Type Constructor" << END_COLOR << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << MURASAKI << "WrongAnimal Destructor" << END_COLOR << std::endl;
}

/*-----------------------------OPERATORS-OVERLOADS-----------------------------*/

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
	this->_type = rhs.getType();

	return *this;
}

/*-----------------------------------GETTERS-----------------------------------*/

std::string	WrongAnimal::getType( void ) const { return this->_type; }

/*-----------------------------------SETTERS-----------------------------------*/

void	WrongAnimal::setType( const std::string type ) { this->_type = type; }

/*----------------------------OTHER-MEMBER-FUNCTIONS---------------------------*/

void	WrongAnimal::makeSound( void ) const
{
	std::cout << MURASAKI << "*Very wrong noises coming from an animal*" << END_COLOR << std::endl;
}

