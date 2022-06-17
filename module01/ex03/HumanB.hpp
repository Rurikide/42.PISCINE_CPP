/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:55:17 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/16 16:39:37 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

// HumanB's weapon is not initialized in their constructor and is not always armed.

class HumanB {

	private:
		std::string _name;
		Weapon*		_weapon;
	
	public:
		HumanB( const std::string name );
		~HumanB( void );
		
		std::string	getName( void ) const;
		Weapon*		getWeapon( void ) const;
		void		setWeapon( Weapon& weapon );
		void		attack( void ) const;
};

#endif
