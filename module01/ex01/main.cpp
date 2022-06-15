/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:35:07 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/15 14:46:43 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "Zombie.hpp"
#include "Define.hpp"

int	main( void )
{
	std::string name = "Foe";
	int	N = 10;

	Zombie* horde = zombieHorde(N, name);

	for (int i = 0; i < N; i++)
		horde->announce();

	delete[] horde;

	return SUCCESS;
}
