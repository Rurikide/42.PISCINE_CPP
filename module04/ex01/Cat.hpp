/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:21:20 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 15:58:20 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain* _brain;

	public:
		Cat( void );
		Cat( const Cat& rhs );
		Cat( const std::string type );
		virtual ~Cat( void );

		Cat& operator=( const Cat& rhs );
		
		Brain*	getBrain( void );
		virtual void	makeSound( void ) const;
};

#endif

