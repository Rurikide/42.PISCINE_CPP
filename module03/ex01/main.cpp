/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:24:44 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/21 00:00:53 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp" // includes "ClapTrap.hpp", which includes <iostream> <string> "Define.hpp"

int	main( void )

{
	ClapTrap gicollette("Gicollette");
	ScavTrap badbadia("Badbadia");

	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());

	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());

	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());

	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());

	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());

	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());

	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());

	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());

	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());
	
	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());

	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());

	badbadia.attack(gicollette.getName());
	gicollette.takeDamage(badbadia.getAttackDamage());


	gicollette.beRepaired(2);
	badbadia.beRepaired(2);


	badbadia.guardGate();
	
	
	return SUCCESS;
}
