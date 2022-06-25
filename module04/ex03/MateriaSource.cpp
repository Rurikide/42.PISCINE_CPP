/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:31:55 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 19:56:50 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp" // includes /<string> classes IMateriaSource, MateriaSource, AMateria
#include "AMateria.hpp"
#include "define.hpp"
#include <iostream>

/*----------------------------CONSTRUCTORS-DESTRUCTOR--------------------------*/

MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource Default Constructor" << std::endl;

	for (int idx = 0; idx < CAPACITY; idx++)
		this->_box[idx] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& rhs )
{
	std::cout << "MateriaSource Copy Constructor" << std::endl;
	*this = rhs;
}

MateriaSource::~MateriaSource( void )
{
	std::cout << "MateriaSource Destructor, also destroying its materias" << std::endl;
	for (int idx = 0; idx < CAPACITY; idx++)
		delete this->_box[idx];
}


/*-----------------------------OPERATORS-OVERLOADS-----------------------------*/

MateriaSource&	MateriaSource::operator=( const MateriaSource& rhs )
{

	for (int idx = 0; idx < CAPACITY; idx++)
		delete this->_box[idx];

	for (int idx = 0; idx < CAPACITY; idx++)
		this->_box[idx] = rhs._box[idx]
	
	return *this;
}

/*----------------------------OTHER-MEMBER-FUNCTIONS---------------------------*/

void	learnMateria( AMateria* m )
{
	for (int idx = 0; idx < CAPACITY; idx++)
	{
		if (this->_box[idx] == NULL)
		{
			this->_box[idx] = m;
			break ;
		}
	}
	if (idx >= CAPACITY)
	{
		std::cout << "learnMateria failed, since the MateriaSource is full" << std::endl;
		delete m;
	}
	else
		std::cout << "MateriaSource successfully learned the materia " << m->getType() << std::endl; 
}

AMateria*	createMateria( const std::string& type )
{
	for (int idx = 0; idx < CAPACITY; idx++)
	{
		if (this->_box[idx].getType() == type)
		{
			std::cout << "Successfully created a materia " << this->_box[idx].getType() << std::endl;
			return this->_box[idx].clone();
		}
	}
	return NULL;
}
