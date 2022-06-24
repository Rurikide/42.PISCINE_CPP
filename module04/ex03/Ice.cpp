/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:35:11 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 15:39:37 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp" // includes <string> classses Ice, AMateria, ICharacter
#include "ICharacter.hpp" // member functions: .getName() .equip(AMateria* m), .unequip(int idx), .use(int idx, ICharacter& target)
#include "Define.hpp"
#include <iostream>

/*---------------------------CONSTRUCTORS-DESTRUCTOR---------------------------*/

Ice::Ice( void ) _type("ice")
{
	std::cout << "Ice Default Constructor" << std::endl;
}

Ice::Ice( const Ice& rhs )
{
	std::cout << "Ice Copy Constructor" << std::endl;
	*this = rhs;
}

Ice::~Ice( void )
{
	std::cout << "Ice Destructor" << std::endl;
}

/*-----------------------------OPERATORS-OVERLOADS-----------------------------*/

Ice&	Ice::operator=( const Ice& rhs )
{
	this->_type = rhs._type; return *this;
}

/*----------------------------OTHER-MEMBER-FUNCTIONS---------------------------*/

Ice*	Ice::clone( void ) const
{
	return new Ice(*this); // where should I put delete???
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << KIIRO << target.getName() << END_COLOR << " *" << std::endl;
}
