/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:40:50 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/14 16:16:12 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "Define.hpp"

int	main( void )
{
	Zombie* zombie = newZombie("Helene");

	zombie->announce();

	randomChump("Stephen");
	
	delete zombie;
	return SUCCESS;
}
