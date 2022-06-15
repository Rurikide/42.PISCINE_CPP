/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:20:45 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/15 12:29:21 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "Define.hpp"

Zombie::Zombie( void )
{
	std::cout << KIIRO << "A wild Zombie appeared!!!" END_COLOR << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << SORAIRO << this->getName() << " has been vanquished..." END_COLOR << std::endl;
}

std::string	Zombie::getName( void )
{
	return this->_name;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}

void	Zombie::announce( void )
{
	std::cout << MURASAKI << this->getName() << ": " << END_COLOR << AKAI << MESSAGE << END_COLOR << std::endl;
}

