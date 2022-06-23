/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:21:20 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 12:19:40 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp" // includes: <string>

class WrongCat : public WrongAnimal {

	public:
		WrongCat( void );
		WrongCat( const WrongCat& rhs );
		WrongCat( const std::string type );
		virtual ~WrongCat( void );

		WrongCat& operator=( const WrongCat& rhs );

		void	makeSound( void ) const;
};

#endif

