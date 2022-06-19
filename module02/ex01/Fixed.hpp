/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 09:43:32 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/19 14:46:15 by tshimoda         ###   ########.fr       */
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
		// new public constructors for ex01
		Fixed( int const value );
		Fixed( float const value );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );	
		// new member functions for ex01
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<( std::ostream& s, Fixed const & value );

#endif
