/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:25:39 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/19 18:26:08 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Define.hpp"

int	main( void )
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	/*---------------------------------------*/

	Fixed c(10);
	Fixed d(14);
	Fixed e(2.5f);
	Fixed f(6.8f);
	
	std::cout << MIDORI "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << END_COLOR << std::endl;
	std::cout << "c / e = " << c / e << std::endl;
	std::cout << "e + c = " << e + c << std::endl;
	std::cout << "e - d = " << e - d << std::endl;
	std::cout << "Fixed::min between e and f is " << Fixed::min(e, f) << std::endl;
	return SUCCESS;
}
