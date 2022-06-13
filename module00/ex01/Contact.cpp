/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:22:53 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/13 15:04:43 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "Contact.hpp"
#include "define.hpp"

Contact::Contact( void ) {}

Contact::~Contact( void ) {}

/*---------------CONTACT-CLASS-GETTERS---------------*/

std::string	Contact::getFirstName( void ) const
{
	return this->firstName;
}

std::string	Contact::getLastName( void ) const
{
	return this->lastName;
}

std::string Contact::getNickname( void) const
{
	return this->nickname;
}

std::string	Contact::getPhoneNumber( void ) const
{
	return this->phoneNumber;
}

std::string	Contact::getDarkestSecret( void ) const
{
	return this->darkestSecret;
}


/*---------------CONCTACT-CLASS-SETTERS---------------*/

void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}


/*----------------other-member-methods -----------------*/

bool	Contact::validNameString(std::string nameString)
{
	size_t i = 0;

	if (nameString.length() == 0)
	{	
		std::cout << AKAI "type something" END_COLOR << std::endl;
		return false;
	}
	while (i < nameString.length())
	{
		if (!std::isalpha(nameString[i]) && !std::isspace(nameString[i]) && nameString[i] != '-')
		{
			std::cout << AKAI "Characters only. hint: abc" END_COLOR << std::endl;
		 	return false;
		}
		i++;
	}
	return true;
}

bool	Contact::validPhoneNumber(std::string phoneNumber)
{
	size_t	i = 0;

	if (phoneNumber.length() == 0)
	{
		std::cout << AKAI "type something" END_COLOR << std::endl;
		return false;
	}
	while (i < phoneNumber.length())
	{
		if (!std::isdigit(phoneNumber[i]) && !std::isspace(phoneNumber[i]) && phoneNumber[i] != '-')
		{
			std::cout << AKAI "Numbers only. hint: 123" END_COLOR << std::endl;
			return false;
		}
		i++;
	}
	return true;
}

bool	Contact::validUserInput(std::string userInput)
{
	if (userInput.length() == 0)
	{
		std::cout << AKAI "type something" END_COLOR << std::endl;
		return false;
	}
	return true;
}
