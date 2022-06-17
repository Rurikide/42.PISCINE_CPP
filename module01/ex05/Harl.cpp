/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:59:15 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/17 18:04:46 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"
#include "Define.hpp"

Harl::Harl( void )
{
	std::cout << KIIRO << "Harl incoming!" END_COLOR << std::endl;

	trigger[0] = "DEBUG"; 
	trigger[1] = "INFO";
	trigger[2] = "WARNING";
	trigger[3] = "ERROR";

	mode[0] = &Harl::debug;
	mode[1] = &Harl::info;
	mode[2] = &Harl::warning;
	mode[3] = &Harl::error;
}

Harl::~Harl( void )
{
	std::cout << KIIRO << "Harl just left without saying bye" END_COLOR << std::endl;
}

void	Harl::debug( void ) const
{
	std::cout << MIDORI "[ DEBUG ]" END_COLOR << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info( void ) const
{
	std::cout << SORAIRO "[ INFO ]" END_COLOR << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void ) const
{
	std::cout << AKAI "[ WARNING ]" END_COLOR << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void ) const
{
	std::cout << MURASAKI "[ ERROR ]" END_COLOR << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	size_t action = 0;;

	while(action < 4)
	{
		if (trigger[action] == level)
			break;
		action++;
	}
	if (action < 4)
		(this->*mode[action])();
}
