/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:43:22 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/20 14:27:12 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*--------------------Constructors-Destructor-------------------*/

ClapTrap::ClapTrap( void ) : _name("Nameless"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << GRAYGREY << this->getName() <<  END_COLOR << " ClapTrap created in Default constructor" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << GRAYGREY << this->getName() << " ClapTrap created in Name constructor" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& rhs )
{
	std::cout << GRAYGREY << this->getName() << END_COLOR << " ClapTrap becomes " << GRAYGREY << rhs.getName() << END_COLOR << " ClapTrap in Copy constructor" std::endl;
	this* = rhs;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << GRAYGREY << this->getName() << " ClapTrap is killed off in destructor" END_COLOR << std::endl;
}

/*--------------------Copy-Assignment-Operator-------------------*/

ClapTrap&	operator=( const ClapTrap& rhs )
{
	this->_name = rhs.getName();
	this->_hitPoint = rhs.getHitPoint();
	this->_energyPoint = rhs.getEnergyPoint();
	this->_attackDamage = rhs.getAttackDamage();

	return	*this;
}

/*---------------------Public-Member-Functions-------------------*/


/*----------------------------Getters----------------------------*/

std::string	ClapTrap::getName( void ) { return this->_name }

unsigned int ClapTrap::getHitPoint( void ) { return this->_hitPoint }

unsigned int ClapTrap::getEnergyPoint( void ) { return this->_energyPoint }

unsigned int ClapTrap::getAttacjDamage( void ) { return this->_attackDamage }

