/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:43:22 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/20 12:44:18 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*--------------------Constructors--------------------*/

ClapTrap::ClapTrap( void ) : _name("Nameless"), _hitPoint(10), _energyPoint(10), _attackDamage(0);
{
	std::cout << GRAYGREY << this->getName() <<  END_COLOR << " ClapTrap created in Default constructor" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& src )
{
	std::cout << GRAYGREY << this->getName() << END_COLOR << " ClapTrap created in Copy constructor" std::endl;
	this* = src;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << GRAYGREY << this->getName() << " ClapTrap is Destructed" END_COLOR << std::endl;
}

ClapTrap::ClapTrap(


/*----------------------Getters-----------------------*/
std::string	ClapTrap::getName( void ) { return this->_name }
unsigned int ClapTrap::getHitPoint( void ) { return this->_hitPoint }
unsigned int ClapTrap::getEnergyPoint( void ) { return this->_energyPoint }
unsigned int ClapTrap::getAttacjDamage( void ) { return this->_attackDamage }

