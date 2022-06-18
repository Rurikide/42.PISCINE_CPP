/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:39:26 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/18 11:05:09 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"
#include "Define.hpp"

int	main(int argc, char **argv)
{
	Harl harl;

	if	(argc != 2)
	{
		std::cout << "Enter: ./harlFilter <level>" << std::endl;
		std::cout << "choice of levels: DEBUG, INFO, WARNING or ERROR" << std::endl;
		return FAIL;
	}
	harl.complain(argv[1]);
	return SUCCESS;
}
