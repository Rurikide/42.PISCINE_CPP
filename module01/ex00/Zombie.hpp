/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:05:35 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/14 15:51:21 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define MESSAGE "BraiiiiiiinnnzzzZ"

#include <iostream>

class Zombie {

	private:
		std::string _name;
	
	public:
		Zombie( void );
		~Zombie( void );
		
		std::string	getName( void );
		void		setName( std::string name );
		void		announce( void );
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif
