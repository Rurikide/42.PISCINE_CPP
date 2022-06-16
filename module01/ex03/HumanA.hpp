/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:49:02 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/16 14:36:18 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

// HumanA takes a Weapon in its constructor and is alwys armed. &references are always initialized, unlike pointers.

class HumanA {

	private:
		std::string _name;
		Weapon&		_weapon;
	
	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );
		
		std::string	getName( void ) const;
		Weapon&		getWeapon( void ) const;
		void		attack( void );
};

#endif
