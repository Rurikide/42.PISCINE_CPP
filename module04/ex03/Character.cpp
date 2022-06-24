/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:10:06 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 18:19:51 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp" // includes /<string> classes Character, ICharacter
#include "AMateria.hpp"
#include "define.hpp"
#include <iostream>

/*----------------------------CONSTRUCTORS-DESTRUCTOR--------------------------*/

Character::Character( void ) : _name("Nameless")
{
	std::cout << "Character Default Constructor" << std::endl;

	for (int idx = 0; idx < SLOTS; idx++)
		this->_inventory[idx] = NULL;
}

Character::Character( const Character& rhs )
{
	std::cout << "Character Copy Constructor" << std::endl;
	*this = rhs;
}

Character::Character( const std::string& name ) : _name(name)
{
	std::cout << "Character Name Constructor" << std::endl;

	for (int idx = 0; idx < SLOTS; idx++)
		this->_inventory[idx] = NULL;
}

Character::~Character( void )
{
	std::cout << "Character Destructor, also destroying its materias" << std::endl;
	for (int idx = 0; idx < SLOTS; idx++)
		delete this->_inventory[idx];
}


/*-----------------------------OPERATORS-OVERLOADS-----------------------------*/

Character&	Character::operator=( const Character& rhs )
{
	this->_name = rhs.getName();

	for (int idx = 0; idx < SLOTS; idx++)
		delete this->_inventory[idx];

	for (int idx = 0; idx < SLOTS; idx++)
		this->_inventory[idx] = rhs._inventory[idx]
	
	return *this;
}

/*----------------------------OTHER-MEMBER-FUNCTIONS---------------------------*/

const std::string&	getName( void ) const
{
	return this->_name;
}

void	equip( AMateria* m )
{
	for (int idx = 0; idx < SLOTS; idx++)
	{
		if (this->_inventory[idx] == NULL)
		{
			this->_inventory[idx] = m;
			break ;
		}
	}
	if (idx >= SLOTS)
		std::cout << "inventory full, couldn't equip the materia " << m->getType() << std::endl;
	else
		std::cout << "successfully equiped the materia " << m->getType() << " in slot #" << idx << std::endl;
}

void	unequip( int idx )
{
	if (idx >= SLOTS)
		return ;
	
	// HOW TO REMEMBER THE ADDRESS OF THE UNEQUIPED MATERIA???
	if (this->_inventory[idx] != NULL)
	{
		std::cout << "unequiped the materia " << this->_inventory[idx]->getType() << " in slot #" << idx << std::endl;
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << "unequip action failed, since no materia found in slot #" << idx << std::endl;
}

void	use( int idx, ICharacter& target )
{
		if (this->_inventory[idx] == NULL)
			std::cout << "use action failed, since no materia equiped in slot #" << idx << std::endl;
		else
		{
			this->_inventory[idx]->use(target.getName());
		}

}
