/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:08:58 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 20:14:40 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp" // includes <string> classes AMateria

#define SLOTS 4

class Character : public ICharacter {

	private:
		std::string _name;
		AMateria*	_inventory[SLOTS];

	public:
		Character( void ); // Default Constructor
		Character( const Character& rhs ); // Copy Constructor
		Character( const std::string& name ); // Name Constructor
		virtual ~Character( void );

		Character& operator=( const Character& rhs ); // Copy assignment overload for Copy Constructor

		virtual const std::string&	getName( void ) const;
		virtual void	equip( AMateria* m );
		virtual void	unequip( int idx );
		virtual void	use( int idx, ICharacter& target );
};

#endif

