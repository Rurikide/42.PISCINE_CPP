/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:21:34 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/21 14:06:30 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp" // includes <string>

/* A C++ virtual function is a member function in the base class that you redefine in a derived class. 
It is declared using the virtual keyword. 
It is used to tell the compiler to perform dynamic linkage or late binding on the function. */

class ScavTrap : virtual public ClapTrap {

	public:
		ScavTrap( void );
		ScavTrap( const ScavTrap& rhs );
		ScavTrap( const std::string& name );
		virtual ~ScavTrap( void );

		ScavTrap& operator=( const ScavTrap& rhs );

		virtual void	attack( const std::string& target );
		void		setEnergyPoint( void );
		void		guardGate( void );
};

#endif
