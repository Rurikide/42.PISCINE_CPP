/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:23:21 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/21 10:23:24 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp" // includes "ClapTrap.hpp", which includes <iostream> <string> "Define.hpp"

/*--------------------Constructors-Destructor-------------------*/

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    this->_name = "Nameless";
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;

    std::cout << MIDORI << "ClapTrap " << this->getName() << " turns into a ScavTrap, inside Default constructor" << END_COLOR << std::endl;

	std::cout << KIIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;

    std::cout << MIDORI << "ClapTrap " << this->getName() << " evolves to a ScavTrap, inside Name constructor" << END_COLOR << std::endl;

	std::cout << KIIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& rhs ) : ClapTrap(rhs.getName()) // to trigger the ClapTrap Name constructor
{
    std::cout << MURASAKI << "This ScapTrap" << END_COLOR << " inherits from ClapTrap " << MURASAKI << rhs.getName() << END_COLOR << ", inside ScavTrap Copy constructor" << std::endl;
	 *this = rhs;

	std::cout << MURASAKI << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << AKAI << "ScavTrap " << this->getName() << " is destroyed by ScavTrap destructor and is now a ClapTrap" << END_COLOR << std::endl;
}

/*--------------------Copy-Assignment-Operator-------------------*/

ScavTrap&	ScavTrap::operator=( const ScavTrap& rhs )
{
	this->_name = rhs.getName();
	this->_hitPoint = rhs.getHitPoint();
	this->_energyPoint = rhs.getEnergyPoint();
	this->_attackDamage = rhs.getAttackDamage();

	return	*this;
}

/*---------------------Public-Member-Functions-------------------*/

void	ScavTrap::attack( const std::string& target )
{
	if (this->getHitPoint() == 0) { std::cout << "ScavTrap "<< this->getName() << " cannot attack, because it fainted (0 HP)" << std::endl; return ; }

	if (this->getEnergyPoint() == 0) { std::cout << "ScavTrap " << this->getName() << " cannot attack, because has no more energy points left" << std::endl; return ; }

	std::cout << "ScavTrap " << AKAI << this->getName() << END_COLOR << " spends 1 energy point to" << AKAI " punch in the face " END_COLOR << target << ", causing " << AKAI <<  this->getAttackDamage() << END_COLOR << " points of " << AKAI "damage!" END_COLOR << std::endl;
	this->_energyPoint = this->getEnergyPoint() - 1;

	std::cout << KIIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

void		ScavTrap::guardGate( void )
{
    if (this->getHitPoint() == 0) { std::cout << "ScavTrap "<< this->getName() << " cannot use special ability , because it fainted (0 HP)" << std::endl; return ; }

	if (this->getEnergyPoint() == 0) { std::cout << "ScavTrap " << this->getName() << " cannot use special ability, because has no more energy points left" << std::endl; return ; }

	std::cout << "ScavTrap " << SORAIRO << this->getName() << END_COLOR << " spends 1 energy point to activate " << SORAIRO << "special ability: guard gate! Gate keeper mode!" << END_COLOR << std::endl;
	this->_energyPoint = this->getEnergyPoint() - 1;

	std::cout << KIIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}
