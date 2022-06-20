/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 09:43:32 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/19 18:50:32 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	private: 
		static const int	_fractionalBits; // important to initialize it in the .cpp
		int					_value;
	
	public:
		Fixed( void );
		Fixed( Fixed const & src );
		~Fixed( void );
		Fixed& operator=( Fixed const & rhs );
		Fixed( int const value );
		Fixed( float const value );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );	
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		// new in ex02: public member functions to overload operators:
		
		// Six comparison operators
		bool	operator>( Fixed const & rhs ) const;
		bool	operator<( Fixed const & rhs ) const;
		bool	operator>=( Fixed const & rhs ) const;
		bool	operator<=( Fixed const & rhs ) const;
		bool	operator==( Fixed const & rhs ) const;
		bool	operator!=( Fixed const & rhs ) const;

		// Four arithmetic operators, these four do not return a Fixed&, as opposed to operator=,  because they don't modifify "this"
		Fixed	operator+( Fixed const & rhs ) const;
		Fixed	operator-( Fixed const & rhs ) const;
		Fixed	operator*( Fixed const & rhs ) const;
		Fixed	operator/( Fixed const & rhs ) const;
		
		// Two incrementation operators
		Fixed&	operator++( void ); // pre ++_value;
		Fixed	operator++( int ); // post _value++;

		// Two decrementation operators
		Fixed&	operator--( void ); // pre --_value;
		Fixed	operator--( int ); // post _value--;
};

std::ostream& operator<<( std::ostream& s, Fixed const & value );

#endif
