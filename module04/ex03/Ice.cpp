/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:35:11 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 21:36:17 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp" // includes <string> classses Ice, AMateria, ICharacter
#include "ICharacter.hpp" // member functions: .getName() .equip(AMateria* m), .unequip(int idx), .use(int idx, ICharacter& target)
#include "define.hpp"
#include <iostream>

/*---------------------------CONSTRUCTORS-DESTRUCTOR---------------------------*/

Ice::Ice( void ) : AMateria("ice")
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

AMateria*	Ice::clone( void ) const
{
	return new Ice(); 
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << KIIRO << target.getName() << END_COLOR << " *" << std::endl;
}
