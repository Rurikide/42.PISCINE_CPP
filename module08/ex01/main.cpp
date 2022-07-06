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

#define SIZE 10

int	main(void)
{
  	{
		std::cout << MIDORI << "[] TEST SCOPE #1 []" << END_COLOR << std::endl;
		Span sp = Span(5);
  	
		try
		{
			sp.addNumber(6);
  			sp.addNumber(3);
  			sp.addNumber(17);
  			sp.addNumber(9);
  			sp.addNumber(11);
  			std::cout << MOMOIRO "shortestSpan: " END_COLOR << sp.shortestSpan() << std::endl;
  			std::cout << SORAIRO "longestSpan: " END_COLOR << sp.longestSpan() << std::endl;
  		}
		catch (std::exception& e)
		{
			std::cout << AKAI << e.what() << END_COLOR << std::endl;
		}
	}
	{
		std::cout << MIDORI << "[] TEST SCOPE #2 []" << END_COLOR << std::endl;
		
		Span a = Span(0);

		try
		{
			a.addNumber(1);

		}
		catch (std::exception& e)
		{
			std::cout << AKAI << e.what() << END_COLOR << std::endl;
		}
	}	
	{
		std::cout << MIDORI << "[] TEST SCOPE #3 []" << END_COLOR << std::endl;
		
		Span b = Span(4);

		try
		{
			b.addNumber(1);
			b.longestSpan();
		}
		catch (std::exception& e)
		{
			std::cout << AKAI << e.what() << END_COLOR << std::endl;
		}
	}	
	{
		std::cout << MIDORI << "[] TEST SCOPE #4 []" << END_COLOR << std::endl;
	
		Span b = Span(SIZE);
		
		try
		{
			srand(static_cast<unsigned int>(time(0)));
			std::vector<int> v;
			for (size_t i = 0; i < SIZE; i++)
				v.push_back(rand());
			b.fillSpan(v.begin(), v.end());
			b.printNumber();
  			std::cout << MOMOIRO "shortestSpan: " END_COLOR << b.shortestSpan() << std::endl;
  			std::cout << SORAIRO "longestSpan: " END_COLOR << b.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << AKAI << e.what() << END_COLOR << std::endl;
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
