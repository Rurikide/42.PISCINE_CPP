/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:20:46 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 15:58:28 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain* _brain;

	public:
		Dog( void );
		Dog( const Dog& rhs );
		virtual ~Dog( void );

		Dog& operator=( const Dog& rhs );

		Brain*	getBrain( void );
		virtual void	makeSound( void ) const;
};

#endif

