/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:32:49 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/30 17:07:01 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionOfScalar.hpp"
#include "define.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please enter: ./ConversionOfScalar [one input]" << std::endl;
		return FAIL;
	}
	
	std::string input(argv[1]);

	ConversionOfScalar a = ConversionOfScalar(input);
	
	a.staticCastMachine();
	a.printResults();

	return SUCCESS;
}
