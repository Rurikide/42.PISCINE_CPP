/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:24:44 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/20 22:59:18 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp" // includes "ClapTrap.hpp", which includes <iostream> <string> "Define.hpp"

int	main( void )

{
	ClapTrap gicollette("Gicollette");
	ClapTrap badbadia("Badbadia");

	gicollette.attack(badbadia.getName());
	badbadia.takeDamage(gicollette.getAttackDamage());
	
	badbadia.attack(gicollette.getName());
	gicollette.takeDamage(1);

	badbadia.attack(gicollette.getName());	
	gicollette.takeDamage(1);

	badbadia.attack(gicollette.getName());	
	gicollette.takeDamage(1);

	badbadia.attack(gicollette.getName());
	gicollette.takeDamage(1);

	ClapTrap twin(badbadia);

	badbadia.attack(gicollette.getName());
	gicollette.takeDamage(1);

	badbadia.attack(gicollette.getName());
	gicollette.takeDamage(1);
	
	badbadia.attack(gicollette.getName());
	gicollette.takeDamage(1);
	
	badbadia.attack(gicollette.getName());
	gicollette.takeDamage(1);
	
	badbadia.attack(gicollette.getName());
	gicollette.takeDamage(1);

	badbadia.attack(gicollette.getName());
	gicollette.takeDamage(1);

	badbadia.attack(gicollette.getName());
	gicollette.takeDamage(1);

	gicollette.beRepaired(2);
	badbadia.beRepaired(2);

	twin.beRepaired(5);


	return SUCCESS;
}
