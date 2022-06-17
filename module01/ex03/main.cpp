/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:00:39 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/16 16:33:42 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include "Define.hpp"

int	main( void )
{
	Weapon	whip("Pleather whip");

	HumanA	alex("Alex", whip);

	alex.attack();
	alex.getWeapon().setType("Ninetails whip");
	alex.attack();
	whip.setType("Poison glitter whip");
	alex.attack();

	Weapon katana("Murasame");

	HumanB seb("Seb");
	seb.attack();
	seb.setWeapon(katana);
	seb.attack();

	/*------------------------------------------*/

	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return SUCCESS;
}
