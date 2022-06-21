#include "FragTrap.hpp" // includes "ClapTrap.hpp", which includes <string>
#include <iostream>
#include "Define.hpp"

/*--------------------Constructors-Destructor-------------------*/

FragTrap::FragTrap( void ) : ClapTrap()
{
    this->_name = "Nameless";
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;

    std::cout << MIDORI << "ClapTrap " << this->getName() << " turns into a FragTrap, inside Default constructor" << END_COLOR << std::endl;

	std::cout << KIIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;

    std::cout << MIDORI << "ClapTrap " << this->getName() << " evolves to a FragTrap, inside Name constructor" << END_COLOR << std::endl;

	std::cout << KIIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

FragTrap::FragTrap( const FragTrap& rhs ) : ClapTrap(rhs.getName()) // to trigger the ClapTrap Name constructor
{
    std::cout << MURASAKI << "This FragTrap" << END_COLOR << " inherits from ClapTrap " << MURASAKI << rhs.getName() << END_COLOR << ", inside FragTrap Copy constructor" << std::endl;
	 *this = rhs;

	std::cout << MURASAKI << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << AKAI << "FragTrap " << this->getName() << " is destroyed by FragTrap destructor and is now a ClapTrap" << END_COLOR << std::endl;
}

/*--------------------Copy-Assignment-Operator-------------------*/

FragTrap&	FragTrap::operator=( const FragTrap& rhs )
{
	this->_name = rhs.getName();
	this->_hitPoint = rhs.getHitPoint();
	this->_energyPoint = rhs.getEnergyPoint();
	this->_attackDamage = rhs.getAttackDamage();

	return	*this;
}

/*---------------------Public-Member-Functions-------------------*/

void	FragTrap::attack( const std::string& target )
{
	if (this->getHitPoint() == 0) { std::cout << "FragTrap "<< this->getName() << " cannot attack, because it fainted (0 HP)" << std::endl; return ; }

	if (this->getEnergyPoint() == 0) { std::cout << "FragTrap " << this->getName() << " cannot attack, because has no more energy points left" << std::endl; return ; }

	std::cout << "FragTrap " << AKAI << this->getName() << END_COLOR << " spends 1 energy point to" << AKAI " burn with a flamethrower " END_COLOR << target << ", causing " << AKAI <<  this->getAttackDamage() << END_COLOR << " points of " << AKAI "damage!" END_COLOR << std::endl;
	this->_energyPoint = this->getEnergyPoint() - 1;

	std::cout << KIIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}

void		FragTrap::highFivesGuys( void )
{
    if (this->getHitPoint() == 0) { std::cout << "FragTrap "<< this->getName() << " cannot use special ability , because it fainted (0 HP)" << std::endl; return ; }

	if (this->getEnergyPoint() == 0) { std::cout << "FragTrap " << this->getName() << " cannot use special ability, because has no more energy points left" << std::endl; return ; }

	std::cout << "FragTrap " << SORAIRO << this->getName() << END_COLOR << " spends 1 energy point to activate " << SORAIRO << "special ability: highFivesGuys! Generating 5 positive energy points!" << END_COLOR << std::endl;
	this->_energyPoint = this->getEnergyPoint() + 5;

	std::cout << KIIRO << this->getName() << " HP: " << this->getHitPoint() << " / EP: " << this->getEnergyPoint() << " / AP: " << this->getAttackDamage() << END_COLOR << std::endl;
}
