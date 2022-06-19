/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:07:41 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/19 19:04:30 by tshimoda         ###   ########.fr       */
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
	
	*this = src;
}

Fixed::~Fixed( void )
{
	std::cout << AKAI  "Destructor" END_COLOR << " called" << std::endl;
}

Fixed&	Fixed::operator=( Fixed const & rhs )
{
	std::cout << MIDORI "Copy assignment operator" END_COLOR << " called" << std::endl; 
	
	if (this != &rhs) 
		_value = rhs.getRawBits();
	
	return *this;
}

Fixed::Fixed( int const value )
{
	std::cout << SHIROIOOI "Int constructor" END_COLOR << " called" << std::endl;

	// This Int constructor bitshift 8 bits to the left 
	this->_value = (value << _fractionalBits);
}

Fixed::Fixed( float const value )
{
	std::cout << MURASAKI "Float constructor" END_COLOR << " called" << std::endl;

	// This Float constructor roundFs the result of: value multiplied by the binary number 1 0000 0000 or 256 in decimal
	this->_value = roundf(value * (float)(1 << _fractionalBits));
}

int	Fixed::getRawBits( void ) const
{
	std::cout << MOMOIRO "getRawBits member function" END_COLOR << " called" << std::endl;
	
	return this->_value;
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

std::ostream& operator<<( std::ostream& s, Fixed const & value )
{
	// std::cout << "inside overload" << std::endl;
	s << value.toFloat();

	return s;
}

float	Fixed::toFloat( void ) const
{
	// reverse operation of the Float constructor, without the roundf, resulting to a slightly different float value
	return (float)this->_value / (1 << _fractionalBits);
}

int	Fixed::toInt( void ) const
{
	// Int constructor bitshift 8 bits to the left. So we need to bitshift 8 bit back to the right to get the original integer value. 
	return this->_value >> _fractionalBits;
}

/*----------------new-in-ex02-------------------*/

bool	Fixed::operator>( Fixed const & rhs ) const
{
	if	(this->getRawBits() > rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<( Fixed const & rhs ) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=( Fixed const & rhs ) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=( Fixed const & rhs ) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==( Fixed const & rhs ) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=( Fixed const & rhs ) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (true);
	else
		return (false);
}

