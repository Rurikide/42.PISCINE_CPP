/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:40:50 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/15 13:34:05 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "Define.hpp"

int	main( void )
{
	Zombie* zombie = newZombie("Heappie");

	zombie->announce();

	randomChump("Stanck");
	
	delete zombie;
	return SUCCESS;
}
