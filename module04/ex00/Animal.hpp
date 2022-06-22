/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:14:38 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/22 13:34:09 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string> // std::string

class Animal {

	protected:
		std::string	_type;
	
	public:
		Animal( void );
		Animal( const Animal& rhs );
		Animal( const std::string type );
		virtual ~Animal( void );

		Animal& operator=( const Animal& rhs );

		std::string	getType( void ) const;
		virtual void	setType( const std::string type);
		virtual void	makeSound( void ) const;
};

#endif

