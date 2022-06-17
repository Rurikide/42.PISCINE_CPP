/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:12:17 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/16 16:39:12 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"
#include "Define.hpp"

HumanB::HumanB( const std::string name ) : _name(name), _weapon(NULL)
{
	std::cout << KIIRO "HumanB is constructed" END_COLOR << std::endl;
}

HumanB::~HumanB( void ) 
{
	std::cout << KIIRO "HumanB is destructed" END_COLOR << std::endl;
}

std::string	HumanB::getName( void ) const
{
	return this->_name;
}

Weapon*	HumanB::getWeapon( void ) const
{
	return this->_weapon;
}

// setWeapon receives a reference instead of a pointer, to do exactly as the main in the subject. 
void	HumanB::setWeapon( Weapon& weapon )
{
	this->_weapon = &weapon;
}

void	HumanB::attack( void ) const
{
	if (this->getWeapon() == NULL)
	{
		std::cout << MURASAKI << this->getName() << END_COLOR <<  " is unarmed..." << std::endl;
		return ;
	}
	std::cout << MURASAKI << this->getName() << END_COLOR << " attacks with their " << MURASAKI << this->getWeapon()->getType() <<  END_COLOR << std::endl;
}
