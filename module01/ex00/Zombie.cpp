/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:20:45 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/14 15:49:07 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "Define.hpp"

Zombie::Zombie( void ) {}

Zombie::~Zombie( void )
{
	std::cout << SORAIRO << this->getName() << " is destroyed..." END_COLOR << std::endl;
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

