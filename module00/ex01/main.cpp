/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:59:30 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/07 17:16:04 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main( void ) {

	PhoneBook instance;
	
	std::string user_input;

	std::cout << "Please enter a command: ADD SEARCH or EXIT" << std::endl;
	std::getline(std::cin, user_input);
	std::cout << user_input << std::endl;


	return (0);
}
