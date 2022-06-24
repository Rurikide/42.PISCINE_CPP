/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:32:05 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 12:00:14 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp" // includes <string>
#include "ICharacter.hpp" // member functions: .getName() .equip(AMateria* m), .unequip(int idx), .use(int idx, ICharacter& target)
#include "Define.hpp"

/*---------------------------CONSTRUCTORS-DESTRUCTOR---------------------------*/

AMateria::AMateria( void ) _type(NULL)
{
	std::cout << "AMateria Default Constructor" << std::endl;
}

AMateria::AMateria( const AMateria& rhs )
{
	std::cout << "AMateria Copy Constructor" << std::endl;
	*this = rhs;
}

AMateria::AMateria( const std::string& type ) : _type(type)
{
	std::cout << "AMateria Type Constructor" << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria Destructor" << std::endl;
}

/*-----------------------------OPERATORS-OVERLOADS-----------------------------*/

AMateria&	AMateria::operator=( const AMateria& rhs )
{
	this->_type = rhs._type; return *this;
}

/*----------------------------OTHER-MEMBER-FUNCTIONS---------------------------*/

const std::string&	AM::getType( void ) const
{
	return this->_type;
}

void	AMateria::use( ICharacter& target )
{
	// Ice: "* shoots an ice bolt at <name> *"
	// Cure: "* heals <name>'s wounds *"
	// target.getName()
}
