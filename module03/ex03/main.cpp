/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:24:44 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/21 13:52:05 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "Define.hpp"

int	main( void )
{
	//ClapTrap gicollette("Gicollette");
	ScavTrap badbadia("Badbadia");
	FragTrap lp("Lo-Phi");
	DiamondTrap mikastiv("Mikastiv");

	mikastiv.attack(lp.getName());
	mikastiv.whoAmI();

	return SUCCESS;
}
