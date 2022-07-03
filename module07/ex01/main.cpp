/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:45:19 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/03 15:04:41 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "define.hpp"
#include <string>

int	main( void )
{
	// TEST INT
	{
		std::cout << MIDORI << "Test with Integers" << END_COLOR << std::endl;
		
		int nb[] = {1, 2, 3, 5, 6, 10};
		iter(nb, sizeof(nb)/sizeof(*nb), printElement);
	}

	// TEST FLOAT
	{
		std::cout << SORAIRO << "Test with Doubles" << END_COLOR << std::endl;

		double decimals[] = {22.0, 23456.3, 322236.23, 10000000000.1};
		iter(decimals, sizeof(decimals)/sizeof(*decimals), printElement);
	}

	// TEST STD::STRING
	{
		std::cout << KIIRO << "Test with Strings" << END_COLOR << std::endl;

		std::string vocab[] = {"allo", "chien", "palmier", "tresor", "42", "Fin"};
		iter(vocab, sizeof(vocab)/sizeof(*vocab), printElement);
	}
	return SUCCESS;
}
