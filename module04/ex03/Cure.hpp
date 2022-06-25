/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:38:15 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 21:36:28 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp" // <string> classes AMateria ICharacter

class ICharacter;

class Cure : public AMateria {

	public:
		Cure( void );
		Cure( const Cure& rhs );
		virtual ~Cure( void );

		Cure& operator=( const Cure& rhs );

		virtual AMateria* clone( void ) const;
		virtual void	use(ICharacter& target);

};

#endif
