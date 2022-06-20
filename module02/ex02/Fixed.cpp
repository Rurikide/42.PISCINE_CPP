/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:07:41 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/19 19:17:37 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Define.hpp"

const int	Fixed::_fractionalBits = 8;

/*-----------------constructors---------------------*/

Fixed::Fixed( void ) : _value(0) {}

Fixed::Fixed( Fixed const & src ) { *this = src ;}

Fixed::Fixed( int const value ) { this->_value = (value << _fractionalBits); }

Fixed::Fixed( float const value ) { this->_value = roundf(value * (float)(1 << _fractionalBits)); }

Fixed::~Fixed( void) {}


/*--------------old-member-functions----------------*/

int	Fixed::getRawBits( void ) const { return this->_value; }

void	Fixed::setRawBits( int const raw ) { this->_value = raw; }

float	Fixed::toFloat( void ) const { return (float)this->_value / (1 << _fractionalBits); }

int	Fixed::toInt( void ) const { return this->_value >> _fractionalBits; }


/*--------------old-operator-overload---------------*/

Fixed&	Fixed::operator=( Fixed const & rhs )
{
	if (this != &rhs) 
		_value = rhs.getRawBits();
	return *this;
}

std::ostream& operator<<( std::ostream& s, Fixed const & value ) { s << value.toFloat(); return s; }


/*-------------------new-in-ex02--------------------*/

// Category:  comparison operators
bool	Fixed::operator>( Fixed const & rhs ) const
{
	return this->getRawBits() > rhs.getRawBits(); // works for boolean
}

bool	Fixed::operator<( Fixed const & rhs ) const
{
	return this->getRawBits() < rhs.getRawBits();
}

bool	Fixed::operator>=( Fixed const & rhs ) const
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool	Fixed::operator<=( Fixed const & rhs ) const
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool	Fixed::operator==( Fixed const & rhs ) const
{
	return this->getRawBits() == rhs.getRawBits();
}

bool	Fixed::operator!=( Fixed const & rhs ) const
{
	return this->getRawBits() != rhs.getRawBits();
}

// Category: arithmetic operators
Fixed	Fixed::operator+( Fixed const & rhs ) const
{
	Fixed result = this->toFloat() + rhs.toFloat(); return result;
}

Fixed	Fixed::operator-( Fixed const & rhs ) const
{
	Fixed result = this->toFloat() - rhs.toFloat(); return result;
}

Fixed	Fixed::operator*( Fixed const & rhs ) const
{
	Fixed result = this->toFloat() * rhs.toFloat(); return result;
}

Fixed	Fixed::operator/( Fixed const & rhs ) const
{
	Fixed result = this->toFloat() / rhs.toFloat(); return result;
}

// Category: incrementation/decrementation operators
Fixed&	Fixed::operator++( void )
{
	//std::cout << "pre-increment" << std::endl; 
	++this->_value; return *this;
}

Fixed	Fixed::operator++(int)
{	
	//std::cout << "post-increment" << std::endl;
	Fixed post(*this); this->_value++; return post;
}

Fixed&	Fixed::operator--( void )
{
	//std::cout << "pre-decrement" << std::endl; 
	--this->_value; return *this;
}

Fixed	Fixed::operator--(int)
{
	//std::cout << "post-decrement" << std::endl; 
	Fixed post(*this); this->_value--; return post;
}
