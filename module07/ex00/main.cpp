/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:33:07 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/03 14:42:38 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "define.hpp"
#include "whatever.hpp"

int	main(void)
{
	/*-------------------TEST-SWAP--------------------*/

	int		a = 10;
	int		b = 20;

	float		c = 42.8f;
	float		d = 21.4f;
	
	std::string	str1 = "Salut";
	std::string	str2 = "Hello";
	
	
	std::cout << "int a = " << a << std::endl;
	std::cout << "int b = " << b << std::endl;
	::swap<int>(a, b);
	std::cout << "swap int a = " << a << std::endl;
	std::cout << "swap int b = " << b << std::endl;


	std::cout << "float c = " << c << std::endl;
	std::cout << "float d = " << d << std::endl;
	::swap<float>(c, d);
	std::cout << "swap float c = " << c << std::endl;
	std::cout << "swap float d = " << d << std::endl;


	std::cout << "str1 = " << str1 << std::endl;
	std::cout << "str2 = " << str2 << std::endl;
	::swap<std::string>(str1, str2);
	std::cout << "swap str1 = " << str1 << std::endl;
	std::cout << "swapstr2 = " << str2 << std::endl;

	/*-------------------TEST-MIN--------------------*/

	int		dix = 10;
	int		vingt = 20;
	int		twenty = 20;
	float		pie = 3.14;
	float		neperienne = 2.71;
	std::string	aloha = "aloha";
	std::string	bueno = "bueno";

	std::cout << MIDORI << "MIN between dix and vingt is: " << ::min<int>(dix, vingt) << std::endl;
	std::cout << "MIN between vingt and twenty is: " << ::min<int>(vingt, twenty) << std::endl;
	std::cout << "MIN between pie and neperienne is: " << ::min<float>(pie, neperienne) << std::endl;
	std::cout << "MIN between aloha and bueno is: " << ::min<std::string>(aloha, bueno) << END_COLOR << std::endl;

	/*-------------------TEST-MAX--------------------*/
	
	std::cout << SORAIRO << "MAX between dix and vingt is: " << ::max<int>(dix, vingt) << std::endl;
	std::cout << "MAX between vingt and twenty is: " << ::max<int>(vingt, twenty) << std::endl;
	std::cout << "MAX between pie and neperienne is: " << ::max<float>(pie, neperienne) << std::endl;
	std::cout << "MAX between aloha and bueno is: " << ::max<std::string>(aloha, bueno) << END_COLOR << std::endl;


	/*--------------------PDF-TEST-------------------*/
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return SUCCESS;
}
