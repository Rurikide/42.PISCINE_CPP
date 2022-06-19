/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:50:21 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/19 11:54:17 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Define.hpp"

int	main( void )
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b; // copy assignment operator overloard;

	std::cout << a.getRawBits() << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << a.getRawBits() << std::endl;

	return SUCCESS;
}
