/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:26:04 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/13 15:39:29 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <iomanip>
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
			continue ;
		else
		{
			this->list[i].setLastName(userInput);
			break ;
		}
	}
	while (true)
	{
		std::cout << "Enter nickname" << std::endl;
		std::getline(std::cin, userInput);
		if (this->list[i].validUserInput(userInput) == false)
			continue ;
		else
		{
			this->list[i].setNickname(userInput);
			break;
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
		if (this->list[i].validUserInput(userInput)  == false)
			continue ;
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
}

void	PhoneBook::Detail( void )
{
		std::string userInput;
		int			index;

		while (true)
		{
			std::cout << MIDORI "Enter the index number of the contact you are looking for, from 1 to 8." END_COLOR << std::endl;
			std::getline(std::cin, userInput);
			if (userInput.length() != 1 || !std::isdigit(userInput[0]))
			{
				std::cout << AKAI "Invalid index number" END_COLOR << std::endl;
				continue ;
			}
			else
				break ;
		}
		index = std::stoi(userInput);
		if (index < 1 || index > MAX_CAPACITY)
		{
				std::cout << AKAI "Index number out of range. Going back to main menu" END_COLOR << std::endl;
				return ;
		}
		std::cout << SORAIRO "Contact information #" << index << ":" << std::endl;
		std::cout << this->list[index - 1].getFirstName() << std::endl;
		std::cout << this->list[index - 1].getLastName() << std::endl;
		std::cout << this->list[index - 1].getNickname() << std::endl;
		std::cout << this->list[index - 1].getPhoneNumber() << std::endl;
		std::cout << this->list[index - 1].getDarkestSecret() << std::endl;
}

void	PhoneBook::Search( void )
{
	std::string userInput;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	size_t		index = 0;

	std::cout << SORAIRO "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_--_-_-_" END_COLOR << std::endl;
	std::cout << SORAIRO "|----------|----------|----------|----------|" END_COLOR << std::endl;
	std::cout << SORAIRO "|-----index|first-name|-last-name|--nickname|" END_COLOR << std::endl;
	
	while (index < MAX_CAPACITY)
	{
		if (this->list[index].getFirstName().length() > 10)
			firstName = this->list[index].getFirstName().substr(0, 9) + ".";
		else
			firstName = this->list[index].getFirstName();
		if (this->list[index].getLastName().length() > 10)
			lastName = this->list[index].getLastName().substr(0, 9) + ".";
		else
			lastName = this->list[index].getLastName();
		if (this->list[index].getNickname().length() > 10)
			nickname = this->list[index].getNickname().substr(0, 9) + ".";
		else
			nickname = this->list[index].getNickname();
		std::cout << SORAIRO "|" << std::setw(10) << index + 1 << "|" << std::setw(10) << firstName << "|" << std::setw(10) << lastName << "|" <<  std::setw(10) << nickname << "|" END_COLOR << std::endl;
		index++;
	}
	std::cout << SORAIRO "|----------|----------|----------|----------|" END_COLOR << std::endl;
	this->Detail();
	std::cout << SORAIRO << userInput << END_COLOR << std::endl;
}

