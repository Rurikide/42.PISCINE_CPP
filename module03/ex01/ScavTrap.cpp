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
	std::cout << AKAI << "ScavTrap " << this->getName() << " is put down by ScavTrap destructor" << END_COLOR << std::endl;
}