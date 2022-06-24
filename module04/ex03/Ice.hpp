/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:33:21 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 15:34:31 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp" // <string> classes AMateria ICharacter

class ICharacter;

class Ice : public AMateria {

	public:
		Ice( void );
		Ice( const Ice& rhs );
		virtual ~Ice( void );

		Ice& operator=( const Ice& rhs );

		virtual Ice* clone( void ) const;
		virtual void	use(ICharacter& target);

};

#endif
