/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionOfScalar.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:02:21 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/30 13:12:29 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONOFSCALAR_HPP
#define CONVERSIONOFSCALAR_HPP

#include <string>

class ConversionOfScalar {

	private:

		ConversionOfScalar( void );

		// none of these attributes are const since they will be modified later on
		std::string		input_;
		char			resChar_;
		int				resInt_;
		float			resFloat_;
		double			resDouble_;
		eScalarType		inputType_;
		eScalarType		staticCastMode[4];

	public:

		ConversionOfScalar( std::string& input ); 
		~ConversionOfScalar( void );
		ConversionOfScalar( const ConversionOfScalar& rhs );
		ConversionOfScalar& operator=( const ConversionOfScalar& rhs );


		enum eScalarType { charType = 1, intType = 2, floatType = 3, doubleType = 4, pseudoTypeF = 5, pseudoTypeD = 6, errorType = 7 };

		/*------------------------MEMBER-FUNCTION---------------------------*/

		eScalarType	parseInput( void );	// sets the inputType_, also sets the value of the corresponding res attribute (either resChar_, resInt_, resFloat_ or resDouble_)
		
		int			isPseudoType( void ); // return values: 0 == no; 5 == pseudoTypeF; 6 == pseudoTypeD
		
		void		staticCastMachine( void )
};

#endif

