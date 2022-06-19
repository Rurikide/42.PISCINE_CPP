/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:07:41 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/19 12:31:02 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Define.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _value(0) 
{
	std::cout << KIIRO  "Default constructor" END_COLOR << " called" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << SORAIRO  "Copy constructor" END_COLOR << " called" << std::endl;
	
	*this = src; //dereferencing Fixed_this to Fixed_src
}

Fixed::~Fixed( void )
{
	std::cout << AKAI  "Destructor" END_COLOR << " called" << std::endl;
}

Fixed&	Fixed::operator=( Fixed const & rhs )
{
	std::cout << MIDORI "Copy assignment operator" END_COLOR << " called" << std::endl; 
	
	if (this != &rhs) // this_pointer_of_type_Fixed addess != &address of rhs_a_&ref_of__typeFixed
		_value = rhs.getRawBits();
	
	return *this; // a pointer of the pointer this
}

int	Fixed::getRawBits( void ) const
{
	std::cout << MURASAKI "getRawBits member function" END_COLOR << " called" << std::endl;
	
	return this->_value;
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

