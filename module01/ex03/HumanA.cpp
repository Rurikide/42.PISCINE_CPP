/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:12:17 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/16 14:36:34 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "Define.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon)
{
	std::cout << KIIRO "HumanA is constructed" END_COLOR << std::endl;
}

HumanA::~HumanA( void ) 
{
	std::cout << KIIRO "HumanA is destructed" END_COLOR << std::endl;
}

std::string	HumanA::getName( void ) const
{
	return this->_name;
}

Weapon&	HumanA::getWeapon( void ) const
{
	return this->_weapon;
}

void	HumanA::attack( void )
{
	std::cout << AKAI << this->getName() << END_COLOR << " attacks with their " << AKAI << this->getWeapon().getType() <<  END_COLOR << std::endl;
}
