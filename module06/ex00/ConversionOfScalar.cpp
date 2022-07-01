/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionOfScalar.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:46:07 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/30 17:42:31 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionOfScalar.hpp" // includes <string> : std::stod  .c_str .empty() .erase(index, str.length)
#include "define.hpp"
#include <iostream>
#include <iomanip> // setprecision(int)
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

	if (aPseudoType != (eScalarType)FAIL)
		return aPseudoType;

	if (input_.length() == 1 && (std::isalpha(input_[0])) && (std::isprint(input_[0])))
	{
		resChar_ = input_[0];
		return charType;
	}
	
	int i = 0;
	int plus = 0;
	int minus = 0;
	int dot = 0;
	int dotIndex = 0;
	int f = 0;

	while (input_[i])
	{	
		if (!std::isdigit(input_[i]) && input_[i] != '+' && input_[i] != '-' && input_[i] != '.' && input_[i] != 'f')
			return errorType;
		if (input_[i] == '+')
			plus++;
		if (input_[i] == '-')
			minus++;
		if (input_[i] == '.')
		{
			dot++;
			dotIndex = i;
		}
		if (input_[i] == 'f')
			f++;
		i++;
	}
	if (plus > 1 || minus > 1 || dot > 1 || f > 1)
		return errorType;
	if (plus == 1 || minus == 1)
	{
		if (plus == minus)
			return errorType;
		if (input_[0] != '+' && input_[0] != '-')
			return errorType;
	}
	if (dot == 1)
	{
		if (input_[dotIndex + 1] && !std::isdigit(input_[dotIndex + 1]))
			return errorType;
	}
	if (f == 1)
	{
		if (input_[input_.size() - 1] != 'f' || dot == 0)
			return errorType;
	}

	try
	{
		if (input_[input_.size() - 1] != 'f' && input_.find(".", 0) == std::string::npos)
		{
			resInt_ = std::stoi(input_);
			return intType;
		}	
	}
	catch (std::exception& e)	{}

	try
	{
		if (input_[input_.size() - 1] == 'f')
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
	catch (std::exception& e)	
	{ return doubleType; /* not returning errorType, because it will be catch again later in printResDouble with the message overflow instead of impossible */ }

	return errorType; // maybe this return is useless 
}

eScalarType	ConversionOfScalar::isPseudoType( void )
{
	if (this->input_ == "-inff" || this->input_ == "+inff" || this->input_ == "nanf")
		return pseudoTypeF; // 5

	if (this->input_ == "-inf" || this->input_ == "+inf" || this->input_ == "nan")
		return pseudoTypeD; // 6

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
	//std::cout << "input type: " << inputType_ << std::endl;
	printResChar();
	printResInt();
	printResFloat();
	printResDouble();
}

void	ConversionOfScalar::printResChar( void )
{
	std::cout << "char: ";

	if (inputType_ == pseudoTypeF || inputType_ == pseudoTypeD || inputType_ == errorType)
		std::cout << "impossible" << std::endl;
	else if (resChar_ < 32 || resChar_ > 126 || resInt_ < 32 || resInt_ > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << resChar_ << "'" << std::endl;
}

void	ConversionOfScalar::printResInt( void )
{
	std::cout << "int: ";

	if (inputType_ == pseudoTypeF || inputType_ == pseudoTypeD || inputType_ == errorType)
		std::cout << "impossible" << std::endl;
	else
	{
		try
		{
			if (inputType_ == charType)
				std::cout << resInt_ << std::endl;
			else
			{
				std::stoi(input_);
				std::cout << resInt_ << std::endl;
			}
		}
		catch (std::exception& e)
		{ std::cout << "overflow" << std::endl; }
	}
}

void	ConversionOfScalar::printResFloat( void )
{
	std::cout << "float: ";

	if (inputType_ == errorType)
		std::cout << "impossible" << std::endl;
	else if (inputType_ == pseudoTypeF)
		std::cout << input_ << std::endl;
	else if (inputType_ == pseudoTypeD)
		std::cout << input_ + 'f' << std::endl;
	else if (inputType_ == intType)
		std::cout << resFloat_ << ".0f" << std::endl;
	else
	{
		try
		{
			if (inputType_ == charType)
				std::cout << resFloat_ << std::endl;
			else
			{
				std::stof(input_);
				std::cout << std::fixed << std::setprecision(1) << resFloat_ << 'f' << std::endl;
			}
		}
		catch (std::exception& e)
		{ std::cout << "overflow" << std::endl; }
	}
}

void	ConversionOfScalar::printResDouble( void )
{
	std::cout << "double: ";

	if (inputType_ == errorType)
		std::cout << "impossible" << std::endl;
	else if (inputType_ == pseudoTypeF)
		std::cout << input_.erase(input_.size() - 1) << std::endl;
	else if (inputType_ == pseudoTypeD)
		std::cout << input_ << std::endl;
	else
	{
		try
		{
			if (inputType_ == charType)
				std::cout << resDouble_ << std::endl;
			else
			{
				std::stod(input_);
				std::cout << std::fixed << std::setprecision(1) << resDouble_ << std::endl;
			}
		}
		catch (std::exception& e)
		{ std::cout << "overflow" << std::endl; }
	}
}
