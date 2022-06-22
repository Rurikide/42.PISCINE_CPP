/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:21:20 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/22 13:40:25 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp" // includes: <string>

class Cat : public Animal {

	public:
		Cat( void );
		Cat( const Cat& rhs );
		Cat( const std::string type );
		virtual ~Cat( void );

		Cat& operator=( const Cat& rhs );

		virtual void	makeSound( void ) const;
};

#endif

