/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:24:44 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/20 18:36:13 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )

{
	ClapTrap gicollette("Gicollette");
	ClapTrap badbadia("Badbadia");

	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());
	
	badbadia.attack(gicollette.getName());
	gicollette.takeDamage(badbadia.getAttackDamage());

	badbadia.beRepaired(42);

	return SUCCESS;
}
