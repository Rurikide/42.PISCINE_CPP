/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:20:41 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 12:00:24 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter; // needed for member function: use(ICharacter& target)

class AMateria {

	protected:
		std::string _type;

	public:
		AMateria( void ); // Default constructor
		AMateria( const AMateria& rhs ); // Copy Constructor
		AMateria( const std::string& type ); // Type Constructor
		virtual ~AMateria( void ); // Destructor 
		AMateria& operator=( const AMateria& rhs ); // Copy assigment overload for Copy Constructor

		const std::string& getType( void ) const // Returns the materia _type
		virtual AMateria* clone( void ) const = 0; // pure virtual method to implement in Cure and Ice classes

		virtual void	use(ICharacter& target); // outputs the message of Cure or Ice at target

};

#endif
