/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionOfScalar.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:02:21 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/30 16:56:00 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONOFSCALAR_HPP
#define CONVERSIONOFSCALAR_HPP

#include <string>

enum eScalarType { charType = 1, intType = 2, floatType = 3, doubleType = 4, pseudoType = 5, errorType = 6 };

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



		/*------------------------MEMBER-FUNCTION---------------------------*/

		eScalarType	parseInput( void );	
		eScalarType	isPseudoType( void ); 
		void		staticCastMachine( void );
		void		printResults( void );
		void		printResChar( void );
		void		printResInt( void );
		void		printResFloat( void );
		void		printResDouble( void );
};

#endif

