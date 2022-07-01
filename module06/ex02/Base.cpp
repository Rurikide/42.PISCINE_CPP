/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:27:29 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/01 16:45:19 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "define.hpp"
#include <cstdlib> // rand()
#include <stdlib.h> // srand()
#include <exception>

Base::~Base( void ) {}

Base*	generate( void )
{
	srand(time(0));

	int seed = (rand()%3);

	switch(seed)
	{
		case 0:
			return new A();
			break;
		
		case 1:
			return new B();
			break;

		case 2:
			return new C();
			break;
	}
	return NULL;
}


void	identify( Base* p )
{
	// if the dynamic_cast fails, the output is 0x0 NULL
	
	A* aPtr = dynamic_cast<A*>(p);
	B* bPtr = dynamic_cast<B*>(p);
	C* cPtr = dynamic_cast<C*>(p);
	
	if (aPtr != NULL)
		std::cout << AKAI << "The objectPointer is of type A" << END_COLOR << std::endl;

	if (bPtr != NULL)
		std::cout << SORAIRO << "The objectPointer is of type B" << END_COLOR << std::endl;

	if (cPtr != NULL)
		std::cout << MIDORI << "The objectPointer is of type C" << END_COLOR << std::endl;

/*
	std::cout << AKAI << aPtr << END_COLOR << std::endl;
	std::cout << SORAIRO << bPtr << END_COLOR << std::endl;
	std::cout << MIDORI << cPtr << END_COLOR << std::endl;
*/

}

void	identify( Base& p )
{
	try
	{
	 	A&	aRef = dynamic_cast<A&>(p); 
		
		(void)aRef;
		std::cout << AKAI << "The objectReference is of type A" << END_COLOR << std::endl;
	}
	catch (std::exception& e) {}	

	try
	{
		B&	bRef = dynamic_cast<B&>(p);

		(void)bRef;
		std::cout << SORAIRO << "The objectReference is of type B" << END_COLOR << std::endl;
	}
	catch (std::exception& e) {}

	try
	{
		C&	cRef = dynamic_cast<C&>(p);

		(void)cRef;
		std::cout << MIDORI << "The objectReference is of type C" << END_COLOR << std::endl;
	}
	catch (std::exception& e) {}
}
