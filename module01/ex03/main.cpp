/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:00:39 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/16 14:47:25 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"
#include "Define.hpp"

int	main( void )
{
	Weapon	whip("Pleather whip");

	HumanA	Alex("Alex", whip);

	Alex.attack();
	Alex.getWeapon().setType("Ninetails whip");
	Alex.attack();

	return SUCCESS;
}
