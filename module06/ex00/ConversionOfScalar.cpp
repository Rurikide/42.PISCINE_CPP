/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionOfScalar.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:46:07 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/30 15:44:28 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionOfScalar.hpp" // includes <string> : std::stod  .c_str .empty() .erase(index, str.length)
#include "define.hpp"
#include <iostream>
#include <limits.h>
#include <cstdlib> // std::atoi std::atof
#include <cctype> // std::isalpha std::isdigit std::isprint
#include <exception>

ConversionOfScalar::ConversionOfScalar( void ) // Private
{
	std::cout << "ConversionOfScalar Default Constructor" << std::endl;
}

ConversionOfScalar::ConversionOfScalar( std::string& input ) : input_(input), resChar_('0'), resInt_(0), resFloat_(0.0f), resDouble_(0.0)
{
	std::cout << "ConversionOfScalar Input Constructor" << std::endl;

	inputType_ = parseInput();

	staticCastMode[0] = charType;
	staticCastMode[1] = intType;
	staticCastMode[2] = floatType;
	staticCastMode[3] = doubleType;
}

ConversionOfScalar::~ConversionOfScalar( void )
{
	std::cout << "ConversionOfScalar Default Destructor" << std::endl;
}

ConversionOfScalar::ConversionOfScalar( const ConversionOfScalar& rhs )
{
	std::cout << "ConversionOfScalar Copy Constructor" << std::endl;
	*this = rhs;
}

ConversionOfScalar&	operator=( const ConversionOfScalar& rhs )
{
	this->input_ = rhs.input;
	return *this;
}

/*---------------------------------MEMBER-FUNCTION---------------------------------*/

int	ConversionOfScalar::isPseudoType( void )
{
	if (this->input_ == "-inff" || this->input_ == "+inff" || this->input_ == "nanf")
		return pseudoTypeF; // 5

	if (this->input_ == "-inf" || this->input_ == "+inf" || this->input_ == "nan")
		return pseudoTypeD; // 6

	return FAIL; // -1
}

eScalarType	ConversionOfScalar::parseInput( void ) // this-> is optional
{
	size_t aPseudoType = isPseudoType();

	if (pseudoType != FAIL)
		return aPseudoType;

	if (input_.length() == 1 && (std::isalpha(input_[0]) && (std::isprint(input_[0]))
	{
		resChar_ = input_[0];
		return charType;
	}

	try
	{
		if (input_.end() != 'f' && input_.find(".", 0) != FAIL)
		{
			resInt_ = std::stoi(input_);
			return intType;
		}	
	}
	catch (std::exception& e)	{}

	try
	{
		if (input_.end() == 'f')
		{
			resFloat_ = std::stof(input_);
			return floatType;
		}	
	}
	catch (std::exception& e)	{}

	try
	{
		resDouble_ = std::stod(input_);
		return doubleType;
	}
	catch (std::exception& e)	{}

	return errorType;
}
