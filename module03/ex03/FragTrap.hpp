/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:22:40 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/21 10:22:43 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp" // includes <string>

/* A C++ virtual function is a member function in the base class that you redefine in a derived class. 
It is declared using the virtual keyword. 
It is used to tell the compiler to perform dynamic linkage or late binding on the function. */

class FragTrap : public ClapTrap { // public inheritance from base class ClapTrap

	private:
		FragTrap( void );

	public:
		FragTrap( const FragTrap& rhs );
		FragTrap( const std::string& name );
		virtual ~FragTrap( void );

		FragTrap& operator=( const FragTrap& rhs );

		virtual void	attack( const std::string& target );

		void		highFivesGuys( void );
};

#endif
