/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:37:25 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/05 16:47:50 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "define.hpp"
#include <iostream>

#define SIZE 100

int	main(void)
{
	{
		Span a = Span(2);

		try
		{
			a.addNumber(20);
			//a.addNumber(30);
			//a.addNumber(0);
			a.printNumber();
		}
		catch (std::exception& e)
		{
			std::cout << AKAI << e.what() << END_COLOR << std::endl;
		}
	}	

	{
		try
		{
			Span b = Span(SIZE);
			srand(static_cast<unsigned int>(time(0)));
			std::vector<int> v;
			for (size_t i = 0; i < SIZE; i++)
				v.push_back(rand());

			b.fillSpan(v.begin(), v.end());
			b.printNumber();
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	/*	try
		{
			a.addNumber(a.getItBegin() + 2, a.getItEnd() - 2);
			for (std::vector<int>::iterator it = a.getItBegin(); it != a.getItEnd(); it++)
				std::cout << *it << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << AKAI << e.what() << END_COLOR << std::endl;
		}
	}	
	*/
	return SUCCESS;
}
