/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:24:44 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/21 10:35:29 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "Define.hpp"

int	main( void )

{
	ClapTrap gicollette("Gicollette");
	ScavTrap badbadia("Badbadia");
	FragTrap lp("Lo-Phi");

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

	lp.attack(badbadia.getName());
	badbadia.takeDamage(lp.getAttackDamage());
	lp.beRepaired(1000);
	lp.highFivesGuys();
	
	
	return SUCCESS;
}
