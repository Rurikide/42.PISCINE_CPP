/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:20:46 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 10:03:25 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp" // includes: <string>

class Dog : public Animal {

	public:
		Dog( void );
		Dog( const Dog& rhs );
		virtual ~Dog( void );

		Dog& operator=( const Dog& rhs );

		virtual void	makeSound( void ) const;
};

#endif

