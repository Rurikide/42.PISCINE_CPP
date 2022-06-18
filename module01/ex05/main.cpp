/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:39:26 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/18 11:47:29 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"
#include "Define.hpp"

int	main( void )
{
	Harl harl;

	harl.complain("DEBUG");
	//harl.complain("INFO");
	//harl.complain("WARNING");
	//harl.complain("ERROR");
	
	//harl.complain("");
	//harl.complain("INCORRECT_LEVEL_INPUT");
	return SUCCESS;
}
