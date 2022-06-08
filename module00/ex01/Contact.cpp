/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:22:53 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/08 16:01:15 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact( void ) {

	std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact( void ) {

	std::cout << "Contact Destructor called" << std::endl;
	return;
}

std::string	Contact::getFirstName( void ) const
{
	return this->firstName;
}

std::string	Contact::getLastName( void ) const
{
	return this->lastName;
}

std::string	Contact::getPhoneNumber( void ) const
{
	return this->phoneNumber;
}

std::string	Contact::getDarkestSecret( void ) const
{
	return this->darkestSecret;
}

void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

