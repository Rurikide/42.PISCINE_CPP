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
#include <string>
#include "Define.hpp"


int	main( int argc, char** argv )
{
	if (argc != 4)
	{
		std::cerr << AKAI << "Error: enter 3 arguments: <filename> <s1> <s2>" END_COLOR << std::endl;
		return FAIL;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() == true || s2.empty() == true)
	{
		std::cerr << AKAI "Error: cannot use empty strings" END_COLOR << std::endl;
		return FAIL;
	}

	/*-------------TESTING-------------*/
	std::cout << "filename: " << filename << " s1 " << s1 << " s2 " << s2 << std::endl;

	return SUCCESS;
}
