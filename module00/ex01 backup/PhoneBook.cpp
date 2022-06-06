/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:26:04 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/06 11:56:17 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

	std::cout << "Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook( void ) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}
