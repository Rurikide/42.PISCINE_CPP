/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:29:10 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/13 16:42:29 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie () 
{
	private:
		std::string	name;
	
	public:
		Zombie( void );
		~Zombie( void );

		void	announce( void );					// Foo: BraiiiiiiinnnzzzZ...
		Zombie*	newZombie( std:: string name );		// creates a zombie, name it and returns it
		void	randomChump( std ::string name );	// creates a zombie, name it and the zombie announce() itself
};

#endif
