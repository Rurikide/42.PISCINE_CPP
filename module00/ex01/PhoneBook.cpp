/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:26:04 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/07 17:17:45 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

	std::cout << "PhoneBook Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook( void ) {
	
	std::cout << "PhoneBook Destructor called" << std::endl;
	return;
}

int	Command(char* command) {
	
	(void)command;	
	
	std::cout << "inside Command()" << std::endl;
	return (0);
}

int	Add(char* user_input) {
	
	(void)user_input;

	std::cout << "inside Add()" << std::endl;
	return (0);
}

int	Search(char* user_input) {

	(void)user_input;

	std::cout << "inside Search()" << std::endl;
	return (0);
}

int	Exit(char* user_input) {
	
	(void)user_input;

	std::cout << "inside Exit()" << std::endl;
	return (0);
}
