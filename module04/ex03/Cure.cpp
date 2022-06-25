/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:32:29 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 21:36:39 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp" // includes <string> classses Cure, AMateria, ICharacter
#include "ICharacter.hpp" // member functions: .getName() .equip(AMateria* m), .unequip(int idx), .use(int idx, ICharacter& target)
#include "define.hpp"
#include <iostream>

/*---------------------------CONSTRUCTORS-DESTRUCTOR---------------------------*/

Cure::Cure( void ) 
{
	std::cout << "Cure Default Constructor" << std::endl;
}

Cure::Cure( const Cure& rhs )
{
	std::cout << "Cure Copy Constructor" << std::endl;
	*this = rhs;
}

Cure::~Cure( void )
{
	std::cout << "Cure Destructor" << std::endl;
}

/*-----------------------------OPERATORS-OVERLOADS-----------------------------*/

Cure&	Cure::operator=( const Cure& rhs )
{
	this->_type = rhs._type; return *this;
}

/*----------------------------OTHER-MEMBER-FUNCTIONS---------------------------*/

AMateria*	Cure::clone( void ) const
{
	return new Cure(*this); // where should I put delete???
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << KIIRO << target.getName() << END_COLOR << "'s wounds *" << std::endl;
}
