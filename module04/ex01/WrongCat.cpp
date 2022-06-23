/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:20:05 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 12:05:31 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp" // includes WrongAnimal.hpp: <string.hpp>
#include "define.hpp"
#include <iostream>

/*---------------------------CONSTRUCTORS-DESTRUCTOR--------------------------*/

WrongCat::WrongCat( void ) : WrongAnimal()
{
	std::cout << AKAI << "WrongCat Default Constructor" << END_COLOR << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& rhs ) : WrongAnimal()
{
	std::cout << AKAI << "WrongCat Copy Constructor" << END_COLOR << std::endl;
	*this = rhs;
}

WrongCat::~WrongCat( void )
{
	std::cout << AKAI << "WrongCat Destructor" << END_COLOR << std::endl;
}

/*-----------------------------OPERATORS-OVERLOADS-----------------------------*/

WrongCat& WrongCat::operator=( const WrongCat& rhs )
{
	this->_type = rhs.getType();

	return *this;
}

/*----------------------------OTHER-MEMBER-FUNCTIONS---------------------------*/

void	WrongCat::makeSound( void ) const
{
	std::cout << AKAI << "mooooooooo!" << END_COLOR << std::endl;
}
