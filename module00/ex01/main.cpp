/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:59:30 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/12 17:04:45 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "define.hpp"

// in-built method .compare() is in <iostream>

int main( void ) {

	PhoneBook phoneBook;
	
	std::string userInput;

	while (true)
	{
		std::cout << MIDORI "Please enter a command: ADD, SEARCH or EXIT" END_COLOR << std::endl;
		std::getline(std::cin, userInput);
		if (userInput.compare("ADD") == SUCCESS)
		{
			phoneBook.Add();
		}
		else if (userInput.compare("SEARCH") == SUCCESS)
		{
			phoneBook.Search();
		}
		else if (userInput.compare("EXIT") == SUCCESS)
		{
			std::cout << MURASAKI << "Farewell..." END_COLOR << std::endl;
			break ;
		}
	}
	
	return SUCCESS;
}
