/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:33:25 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/21 14:15:42 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string _name;

	public:
		DiamondTrap( void );
		DiamondTrap( const DiamondTrap& rhs );
		DiamondTrap( const std::string& name );
		virtual ~DiamondTrap( void );

		DiamondTrap& operator=( const DiamondTrap& rhs );

		virtual void	attack( const std::string& target );
		//using	ScavTrap::attack;
		//using	ScavTrap::setEnergyPoint;
		void	whoAmI( void );	
};

#endif



