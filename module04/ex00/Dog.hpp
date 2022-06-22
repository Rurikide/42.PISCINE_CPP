/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:20:46 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/22 13:43:21 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp" // includes: <string>

class Dog : public Animal {

	public:
		Dog( void );
		Dog( const Dog& rhs );
		Dog( const std::string type );
		virtual ~Dog( void );

		Dog& operator=( const Dog& rhs );

		virtual void	makeSound( void ) const;
};

#endif

