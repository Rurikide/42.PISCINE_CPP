/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 09:43:32 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/19 11:53:46 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

	private: 
		static const int	_fractionalBits; // important to initialize it in the .cpp
		int					_value;
	
	public: // Orthodox Canonical Form
		Fixed( void ); // default constructor
		Fixed( Fixed const & src ); // copy constructor
		~Fixed( void ); // destructor, no virtual yet in module02
		Fixed& operator=( Fixed const & rhs ); // a copy  =assignment operator overload

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );	
};

#endif
