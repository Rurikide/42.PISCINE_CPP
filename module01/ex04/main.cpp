/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:00:39 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/17 14:26:06 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>	// .empty() .find(str, 0) .erase(index, str.length) .insert(index, newstr)
#include <fstream>	//. .open() .is_open() .close()
#include "Define.hpp"

int	main( int argc, char** argv )
{
	if (argc != 4)
	{
		std::cerr << AKAI << "Error: enter: ./sed  <filename> <s1> <s2>" END_COLOR << std::endl;
		return FAIL;
	}
	std::string filename(argv[1]); // equivalent to:  filename =  argv[1];
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	if (s1.empty() == true || s2.empty() == true)
	{
		std::cerr << AKAI "Error: empty strings" END_COLOR << std::endl;
		return FAIL;
	}
	std::ifstream file(filename.c_str()); // file is an instance of the class ifstream
	if (file.is_open() == false)
	{
		std::cerr << AKAI << "Error: opening file" END_COLOR << std::endl;
		return FAIL;
	}
	std::string result_filename(filename + ".replace");
	std::ofstream result_file(result_filename.c_str());
	if (result_file.is_open() == false)
	{
		std::cerr << AKAI "Error: unable to create file" END_COLOR << std::endl;
		return FAIL;
	}
	for (std::string line; std::getline(file, line); )
	{
		int index = line.find(s1, 0);
		while (index != FAIL)
		{
			line.erase(index, s1.length());
			line.insert(index, s2);
			index = index + s2.length();
			index = line.find(s1, index);
		}
		result_file << line << std::endl;
	}
	file.close();
	result_file.close();
	return SUCCESS;
}

// ifstream class constructor takes filename as a const char* rather than a c++ std::string
// c_str() member function returns a const char * pointer to the string.

// .open() opens or creates a file if it doesn't exist. .is_open() attemps to open the file

// .find(str, 0) 0 is the position first character of the string, meaning searching for the whole str. .find return the index position

// std::string::npos is a constant probably npos == -1, representing a non-position, returned by .find() when the pattern is not found
