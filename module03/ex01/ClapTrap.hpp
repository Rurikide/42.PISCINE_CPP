/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:24:04 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/20 23:05:48 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream> // std::cout
#include <string> // std::string
#include "Define.hpp"

/* A C++ virtual function is a member function in the base class that you redefine in a derived class. 
It is declared using the virtual keyword. 
It is used to tell the compiler to perform dynamic linkage or late binding on the function. */

class ClapTrap {

	// now protected, so the derived instances of ClapTrap can inherit these next four formerly private attributes
	protected:
		std::string	_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;

	public:
		ClapTrap( void ); // can't be private, since needed by ScavTrap Default constructor
		ClapTrap( const ClapTrap& rhs );
		ClapTrap( const std::string& name );
		virtual ~ClapTrap( void ); // now respects the Orthodox Canonical Form with the virtual keyword

		ClapTrap& operator=( const ClapTrap& rhs );

		virtual void	attack( const std::string& target ); // Virtual because the subject specifies this attack() prints different messages, from the attack() in ScavTrap
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

		std::string	getName( void ) const;
		unsigned int	getHitPoint( void ) const;
		unsigned int	getEnergyPoint( void ) const;
		unsigned int	getAttackDamage( void ) const;
};

#endif
