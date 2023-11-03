/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:20:20 by tshimoda          #+#    #+#             */
/*   Updated: 2023/11/03 11:40:38 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "define.hpp"
#include <string>		// .empty() .find(str, 0) .erase(index, str.length) .insert(index, newstr)
#include <fstream>		// .open() .is_open() .close()
#include <iostream>
#include <map>

// OLDEST 2013-06-08
// RECENT 2022-03-29
// COMA ',' is the delimeter
// BITCOIN VALUE float with 2 decimal atmost?
//
int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout <<  AKAI << "Error: could not open file." << END_COLOR << std::endl;	
	}
	(void)argv;

	std::map<std::string, float> table;

	// MAPS ARE ORDERED TYPE OF DATA COLLECTION!	
	table.insert(std::pair<std::string, float>("keyZ", 42.42));
	table.insert(std::pair<std::string, float>("keyA", 10));
	table.insert(std::pair<std::string, float>("keyC", 4.2));

	std::map<std::string, float>::iterator it = table.begin();
	std::map<std::string, float>::iterator ite = table.end();

	for (; it != ite; it++)
		std::cout << it->first << " | " << it->second << std::endl; 
	return (SUCCESS);
}



// ifstream class constructor takes filename as a const char* rather than a c++ std::string
// c_str() member function returns a const char * pointer to the string.

// .open() opens or creates a file if it doesn't exist. .is_open() attemps to open the file

// .find(str, 0) 0 is the position first character of the string, meaning searching for the whole str. .find return the index position

// std::string::npos is a constant probably npos == -1, representing a non-position, returned by .find() when the pattern is not found
