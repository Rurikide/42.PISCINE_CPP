/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:27:06 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 20:05:07 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp" // includes <string> classes IMateriaSource, AMateria
#include "AMateria.hpp"

#define CAPACITY 4

class MateriaSource : public IMateriaSource {
	
	private:
		//std::string _spellBook[CAPACITY] doesn't work
		AMateria*	_box[CAPACITY];

	public:
		MateriaSource( void ); 
		MateriaSource( const MateriaSource& rhs );
		virtual ~MateriaSource( void );

		MateriaSource& operator=( const MateriaSource& rhs );

		virtual void	learnMateria( AMateria* rhs );
		virtual AMateria*	createMateria( const std::string& type );

};

#endif

