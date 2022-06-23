/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:14:38 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 12:18:36 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string> // std::string

class WrongAnimal {

	protected:
		std::string	_type;
	
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& rhs );
		WrongAnimal( const std::string type );
		virtual ~WrongAnimal( void );

		WrongAnimal& operator=( const WrongAnimal& rhs );

		std::string	getType( void ) const;
		void	setType( const std::string type);
		void	makeSound( void ) const;
};

#endif

