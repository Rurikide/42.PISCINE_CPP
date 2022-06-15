/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:12:50 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/15 15:37:06 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Define.hpp"

int	main( void )
{
	std::string message = "HI THIS IS BRAIN";
	std::string* strPtr = &message;
	std::string& strRef = message;

	std::cout << KIIRO "memory address of message: " <<  &message << END_COLOR << std::endl;
	std::cout << SORAIRO "memory address of strPtr: " <<  strPtr << END_COLOR << std::endl;
	std::cout << MIDORI "memory address of strRef: " << &strRef << END_COLOR << std::endl;

	std::cout << KIIRO "value of message: " << message << END_COLOR << std::endl;
	std::cout << SORAIRO "value pointed to by strPtr: " << &strPtr << END_COLOR <<  std::endl;
	std::cout << MIDORI "value pointed to by strRef: " << strRef << END_COLOR << std::endl;

	return 0;
}
