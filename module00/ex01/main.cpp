/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:59:30 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/08 15:35:17 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

// in-built method .compare() is in <iostream>

int main( void ) {

	PhoneBook instance;
	
	std::string userInput;

	while (true)
	{
		std::cout << "Please enter a command: ADD SEARCH or EXIT" << std::endl;
		std::getline(std::cin, userInput);
		// std::cout << user_input << std::endl;
	
		if (userInput.compare("ADD") == SUCCESS) {

			std::cout << "the user entered ADD" << std::endl;
			instance.Add();
		}
		else if (userInput.compare("SEARCH") == SUCCESS) {

	 		std::cout << "the user entered SEARCH" << std::endl;
			instance.Search();
		}
		else if (userInput.compare("EXIT") == SUCCESS) {

			std::cout << "the user entered EXIT";
			instance.Exit();
		}
	}
	
	return SUCCESS;
}
