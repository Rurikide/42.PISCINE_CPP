/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:07:09 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/14 15:57:23 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "Define.hpp"

void	randomChump( std::string name )
{
	Zombie newBorn;

	newBorn.setName(name);
	newBorn.announce();
}
