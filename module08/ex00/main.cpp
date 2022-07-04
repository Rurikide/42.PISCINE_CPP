/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:48:05 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/04 15:30:50 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "define.hpp"
#include <iostream>
#include <string>
#include <deque>
#include <list>
#include <vector>

void	result(bool answer, const int& value)
{
	if (answer == true)
		std::cout << MIDORI << "int value " << value << " found" << END_COLOR << std::endl;
	else
		std::cout << AKAI << "int value " << value << " not found" << END_COLOR << std::endl;
}

int	main(void)
{
	{
		std::cout << "TEST WITH VECTOR CONTAINER" << std::endl;

		std::vector<int> v;
	
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(5);
		v.push_back(6);
		v.push_back(7);
		v.push_back(8);
		v.push_back(9);

		result(easyFind( v, 4), 4);
		result(easyFind( v, 5), 5);
	}
	{
		std::cout << "TEST WITH LIST CONTAINER" << std::endl;

		std::list<int> l;

		l.push_back(1);
		l.push_back(2);
		l.push_back(3);
		l.push_back(5);
		l.push_back(6);
		l.push_back(7);
		l.push_back(8);
		l.push_back(9);

		result(easyFind( l, 2), 2);
		result(easyFind( l, 10), 10);
	}
	{
		std::cout << "TEST WITH DEQUE CONTAINER" << std::endl;

		std::list<int> d;

		d.push_back(1);
		d.push_back(2);
		d.push_back(3);
		d.push_back(5);
		d.push_back(6);
		d.push_back(7);
		d.push_back(8);
		d.push_back(9);

		result(easyFind( d, 0), 0);
		result(easyFind( d, 8), 8);
	}

	return SUCCESS;
}

