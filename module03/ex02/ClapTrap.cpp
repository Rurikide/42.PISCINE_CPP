/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:43:22 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/21 07:19:57 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp" // includes <string>
#include <iostream>
#include "Define.hpp"

/*--------------------Constructors-Destructor-------------------*/

ClapTrap::ClapTrap( void ) : _name("Nameless"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << MIDORI << this->getName() << " created in ClapTrap Default constructor" << END_COLOR << std::endl;

	std::cout << KIIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

ClapTrap::ClapTrap( const std::string& name ) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << MIDORI << this->getName() << " created in ClapTrap Name constructor" << END_COLOR << std::endl;

	std::cout << KIIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& rhs )
{
	std::cout << MURASAKI << "This newly instanciated" << END_COLOR << " ClapTrap becomes a replica of " << MURASAKI << rhs.getName() << END_COLOR << " ClapTrap using Copy constructor" << std::endl;
	 *this = rhs;

	std::cout << MURASAKI << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << AKAI << this->getName() << " is killed off by ClapTrap destructor" << END_COLOR << std::endl;
}

/*--------------------Copy-Assignment-Operator-------------------*/

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs )
{
	this->_name = rhs.getName();
	this->_hitPoint = rhs.getHitPoint();
	this->_energyPoint = rhs.getEnergyPoint();
	this->_attackDamage = rhs.getAttackDamage();

	return	*this;
}

/*---------------------Public-Member-Functions-------------------*/

void	ClapTrap::attack( const std::string& target )
{
	if (this->getHitPoint() == 0) { std::cout << "ClapTrap "<< this->getName() << " cannot attack, because it fainted (0 HP)" << std::endl; return ; }

	if (this->getEnergyPoint() == 0) { std::cout << "ClapTrap " << this->getName() << " cannot attack, because has no more energy points left" << std::endl; return ; }

	std::cout << "ClapTrap " << AKAI << this->getName() << END_COLOR << " spends 1 energy point to" << AKAI " attack " END_COLOR << target << ", causing " << AKAI <<  this->getAttackDamage() << END_COLOR << " points of " << AKAI "damage!" END_COLOR << std::endl;
	this->_energyPoint = this->getEnergyPoint() - 1;

	std::cout << KIIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->getHitPoint() == 0) { std::cout << this->getName() << " cannot take damage, because has already fallen. (0 HP)" << std::endl;	return ; }

	std::cout << this->getName() << " received " << AKAI << amount << " damage!" << END_COLOR << std::endl;

	if (amount > this->getHitPoint())
		amount = this->getHitPoint();

	this->_hitPoint -= amount;

	std::cout << AKAI << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;

	if (this->getHitPoint() == 0) { std::cout << this->getName() << " has no more HP and just fainted..." << std::endl; return ; }
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->getHitPoint() == 0) { std::cout << this->getName() << " cannot repair itself, because it fainted (0 HP)" << std::endl; return ; }
	if (this->getEnergyPoint() == 0) { std::cout << this->getName() << " cannot repair itself, because has no more energy points left" << std::endl; return ; }

	this->_hitPoint += amount;
	this->_energyPoint -= 1;
	std::cout << SORAIRO << this->getName() << END_COLOR << " spends 1 energy point to " << SORAIRO "repair itself" END_COLOR << ". " << "Gaining " << SORAIRO << amount << END_COLOR << " HP" << std::endl;
	std::cout << SORAIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;

}

/*----------------------------Getters----------------------------*/

std::string	ClapTrap::getName( void ) const { return this->_name;}

unsigned int	ClapTrap::getHitPoint( void ) const { return this->_hitPoint; }

unsigned int	ClapTrap::getEnergyPoint( void ) const { return this->_energyPoint; }

unsigned int	ClapTrap::getAttackDamage( void ) const { return this->_attackDamage; }

