/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:26:04 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/08 16:02:44 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) 
{
	std::cout << "PhoneBook Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook( void ) 
{	
	std::cout << "PhoneBook Destructor called" << std::endl;
	return;
}

int	PhoneBook::Add( void ) 
{	
	std::string userInput;
	static int i;

	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, userInput);
	this->list[i].setFirstName(userInput);

	std::cout << "Contact first name is " << this->list[i].getFirstName() << std::endl;
	return (0);
}

int	PhoneBook::Search( void )
{
	std::string userInput;

	std::cout << "inside Search()" << std::endl;
	return (0);
}

int	PhoneBook::Exit( void ) 
{	
	std::string userInput;

	std::cout << "inside Exit()" << std::endl;
	return (0);
}

