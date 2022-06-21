/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:31:55 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/21 14:15:26 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp" //
#include <iostream>
#include "Define.hpp"

/*--------------------Constructors-Destructor-------------------*/

DiamondTrap::DiamondTrap( void ) : ClapTrap()
{
    this->_name = "Nameless";
    this->_hitPoint = FragTrap::_hitPoint;
    ScavTrap::setEnergyPoint();
    this->_attackDamage = FragTrap::_attackDamage;

    std::cout << MIDORI << "DiamondTrap " << this->_name << " emerged from Diamond Default constructor" << END_COLOR << std::endl;

	std::cout << KIIRO << this->_name << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap(name + "_clap_name"), _name(name)
{
	this->_name = name;
    this->_hitPoint = FragTrap::_hitPoint;
    ScavTrap::setEnergyPoint();
    this->_attackDamage = FragTrap::_attackDamage;

   std::cout << MIDORI << "DiamondTrap " << this->_name << " took shape, inside Diamond Name constructor" << END_COLOR << std::endl;

	std::cout << KIIRO << this->_name << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& rhs ) : ClapTrap(rhs.getName()) // to trigger the ClapTrap Name constructor
{
    std::cout << MURASAKI << "This DiamondTrap" << END_COLOR << " is a doppelganger of " << MURASAKI << rhs.getName() << END_COLOR << ", made in Diamond Copy constructor" << std::endl;
	 *this = rhs;

	std::cout << MURASAKI << this->_name << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << AKAI << "DiamondTrap " << this->_name << " is crushed in pieces, inside Diamond destructor" << END_COLOR << std::endl;
}

/*--------------------Copy-Assignment-Operator-------------------*/

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& rhs )
{
	this->_name = rhs.getName();
	this->_hitPoint = rhs.getHitPoint();
	this->_energyPoint = rhs.getEnergyPoint();
	this->_attackDamage = rhs.getAttackDamage();

	return	*this;
}

/*---------------------Public-Member-Functions-------------------*/

void	DiamondTrap::attack( const std::string& target )
{
	if (this->getHitPoint() == 0) { std::cout << "DiamondTrap "<< this->getName() << " cannot attack, because it fainted (0 HP)" << std::endl; return ; }

	if (this->getEnergyPoint() == 0) { std::cout << "DiamondTrap " << this->getName() << " cannot attack, because has no more energy points left" << std::endl; return ; }

	ScavTrap::attack(target);
	//std::cout << "DiamondTrap " << AKAI << this->getName() << END_COLOR << " spends 1 energy point to" << AKAI " burn with a flamethrower " END_COLOR << target << ", causing " << AKAI <<  this->getAttackDamage() << END_COLOR << " points of " << AKAI "damage!" END_COLOR << std::endl;
	//this->_energyPoint = this->getEnergyPoint() - 1;
	//std::cout << KIIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

void		DiamondTrap::whoAmI( void )
{
	std::cout << "performing whoAmI!" << std::endl;

	std::cout << "My DiamondTrap name is " << SORAIRO << this->_name << END_COLOR << " and my ClapTrap name is " << SORAIRO << ClapTrap::_name << END_COLOR << std::endl;
}
