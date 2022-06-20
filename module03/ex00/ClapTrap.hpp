/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:24:04 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/20 15:44:21 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include "Define.hpp"

class ClapTrap {

	private:
		std::string			_name;
		unsigned int		_hitPoint;
		unsigned int		_energyPoint;
		unsigned int		_attackDamage;

	public:
		ClapTrap( void ); // This Default constructor could be set to private if I don't want a ClapTrap to be instantiated without parameters;
		ClapTrap( const ClapTrap& rhs );
		ClapTrap( const std::string& name );
		~ClapTrap( void );

		ClapTrap& operator=( const ClapTrap& rhs );

		void			attack( const std::string& target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );

		std::string		getName( void ) const;
		unsigned int	getHitPoint( void ) const;
		unsigned int	getEnergyPoint( void ) const;
		unsigned int	getAttackDamage( void ) const;
};

#endif
