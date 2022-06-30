/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionOfScalar.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:46:07 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/30 17:39:35 by tshimoda         ###   ########.fr       */
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
	// std::cout << "ConversionOfScalar Default Constructor" << std::endl;
}

ConversionOfScalar::ConversionOfScalar( std::string& input ) : input_(input), resChar_('0'), resInt_(0), resFloat_(0.0f), resDouble_(0.0)
{
	// std::cout << "ConversionOfScalar Input Constructor" << std::endl;

	inputType_ = parseInput();

	staticCastMode[0] = charType;
	staticCastMode[1] = intType;
	staticCastMode[2] = floatType;
	staticCastMode[3] = doubleType;
}

ConversionOfScalar::~ConversionOfScalar( void )
{
	// std::cout << "ConversionOfScalar Default Destructor" << std::endl;
}

ConversionOfScalar::ConversionOfScalar( const ConversionOfScalar& rhs )
{
	std::cout << "ConversionOfScalar Copy Constructor" << std::endl;
	*this = rhs;
}

ConversionOfScalar&	ConversionOfScalar::operator=( const ConversionOfScalar& rhs )
{
	this->input_ = rhs.input_;
	return *this;
}

/*---------------------------------MEMBER-FUNCTION---------------------------------*/

eScalarType	ConversionOfScalar::parseInput( void ) // this-> is optional
{
	eScalarType  aPseudoType = isPseudoType();

	if (aPseudoType != (eScalarType)-1)
		return aPseudoType;

	if (input_.length() == 1 && (!std::isdigit(input_[0])) && (std::isprint(input_[0])))
	{
		resChar_ = input_[0];
		return charType;
	}

	try
	{
		if (*input_.end() != 'f' && input_.find(".", 0) != std::string::npos)
		{
			resInt_ = std::stoi(input_);
			return intType;
		}	
	}
	catch (std::exception& e)	{}

	try
	{
		if (*input_.end() == 'f')
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

eScalarType	ConversionOfScalar::isPseudoType( void )
{
	if (this->input_ == "-inff" || this->input_ == "+inff" || this->input_ == "nanf")
		return pseudoType; // 5

	if (this->input_ == "-inf" || this->input_ == "+inf" || this->input_ == "nan")
		return pseudoType; // 6

	return (eScalarType)FAIL; // -1
}

void	ConversionOfScalar::staticCastMachine( void )
{
	size_t i = 0;

	while (i < 4)
	{
		if (inputType_ == staticCastMode[i])
			break ;
		i++;
	}
	
	switch (i)
	{
		case 0: //charType : resChar
		{
			resInt_ = static_cast<int>(resChar_); // char to ascii value
			
			std::cout << resInt_ << std::endl;

			resFloat_ = static_cast<float>(resInt_);
			resDouble_ = static_cast<double>(resInt_);
			break ;
		}
		case 1: //intType : resInt_
		{
			resChar_ = static_cast<char>(resInt_);
			resFloat_ = static_cast<float>(resInt_);
			resDouble_ = static_cast<double>(resInt_);
			break ;
		}
		case 2: //floatType : resFloat_
		{
			resChar_ = static_cast<char>(resFloat_);
			resInt_ = static_cast<int>(resFloat_);
			resDouble_ = static_cast<double>(resFloat_);
			break ;
		}
		case 3: //doubleType : resDouble_
		{
			resChar_ = static_cast<char>(resDouble_);
			resInt_ = static_cast<int>(resDouble_);
			resFloat_ = static_cast<float>(resDouble_);
			break ;
		}
		default:
			break ;
	}
}

void	ConversionOfScalar::printResults( void )
{
	printResChar();
	printResInt();
	printResFloat();
	printResDouble();
}

void	ConversionOfScalar::printResChar( void )
{
	std::cout << "char: ";

	if (inputType_ == pseudoType || inputType_ == errorType)
		std::cout << "impossible" << std::endl;
	else if (resChar_ < 32 || resChar_ > 126 || resInt_ < 32 || resInt_ > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << resChar_ << std::endl;
}

void	ConversionOfScalar::printResInt( void )
{
	std::cout << "int: ";

	if (inputType_ == pseudoType || inputType_ == errorType)
		std::cout << "impossible" << std::endl;
	else
	{
		try
		{
			if (inputType_ == charType || std::stoi(input_))
				std::cout << resInt_ << std::endl;
		}
		catch (std::exception& e)
		{ std::cout << "overflow" << std::endl; }
	}
}

void	ConversionOfScalar::printResFloat( void )
{

}

void	ConversionOfScalar::printResDouble( void )
{

}
