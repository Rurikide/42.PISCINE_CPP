/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:26:12 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/16 14:29:22 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "Define.hpp"

Weapon::Weapon( std::string type ) : _type(type) {}
Weapon::~Weapon( void ) {}

const std::string&	Weapon::getType( void ) const
{
	return this->_type;
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}
