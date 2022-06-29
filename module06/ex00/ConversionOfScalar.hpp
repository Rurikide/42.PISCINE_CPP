/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionOfScalar.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:02:21 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/29 16:44:03 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONOFSCALAR_HPP
#define CONVERSIONOFSCALAR_HPP

#include <string>
#include <cmath>

class ConversionOfScalar {

	private:

		ConversionOfScalar( void );

	public:

		ConversionOfScalar( std::string& input ); // not const?
		~ConversionOfScalar( void );
		ConversionOfScalar( const ConversionOfScalar& rhs );
		ConversionOfScalar& operator=( const ConversionOfScalar& rhs );
		

		//operator float()	{ return this->_v; }
		//operator int()	{ return static_cast<int>(this->_v); }
};

#endif

