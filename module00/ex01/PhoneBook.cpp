/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:26:04 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/12 17:02:59 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "define.hpp"

PhoneBook::PhoneBook( void ) {}

PhoneBook::~PhoneBook( void ) {} 

void	PhoneBook::Add( void ) 
{	
	std::string	userInput;
	static int	i;
	while (true)
	{
		std::cout << "Enter first name" << std::endl;
		std::getline(std::cin, userInput);
		if (this->list[i].validNameString(userInput) == false)
			continue ;
		else
		{
			this->list[i].setFirstName(userInput);
			break ;
		}
	}
	while (true)
	{
		std::cout << "Enter last name" << std::endl;
		std::getline(std::cin, userInput);
		if (this->list[i].validNameString(userInput) == false)
			continue;
		else
		{
			this->list[i].setLastName(userInput);
			break ;
		}
	}
	while (true)
	{
		std::cout << "Enter phone number" << std::endl;
		std::getline(std::cin, userInput);
		if (this->list[i].validPhoneNumber(userInput) == false)
			continue ;
		else
		{
			this->list[i].setPhoneNumber(userInput);
			break ;
		}
	}
	while (true)
	{
		std::cout << "Enter darkest secret" << std::endl;
		std::getline(std::cin, userInput);
		if (userInput.length() == 0)
		{
			std::cout << AKAI "type something" END_COLOR << std::endl;
			continue ;
		}
		else
		{
			this->list[i].setDarkestSecret(userInput);
			break ;
		}
	}
	std::cout << "Thank you. Contact informations saved in phone book slot #" << i + 1 << "." << std::endl;

	if (i + 1  == 8)
		i = 0;
	else
		i++;
	std::cout << "i == " << i << std::endl;
}

void	PhoneBook::Search( void )
{
	std::string userInput;

	std::cout << "inside Search()" << std::endl;
}

